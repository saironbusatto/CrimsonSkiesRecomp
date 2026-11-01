/**
 * TGA decoding for the native D3DXCreateTextureFromFileInMemoryEx.
 * Pure C with no guest dependencies, so it can be self-checked standalone:
 *   cc -DTGA_TEXTURE_TEST -fsanitize=address src/tga_texture.c -o /tmp/tga && /tmp/tga
 */
#include "tga_texture.h"

#include <stdlib.h>
#include <string.h>

enum {
    TGA_HEADER_SIZE = 18,
    TGA_TYPE_RGB = 2,
    TGA_TYPE_RGB_RLE = 10,
    TGA_DESC_TOP_LEFT = 0x20,
    TGA_RLE_PACKET_FLAG = 0x80,
    TGA_MAX_DIMENSION = 4096
};

static int is_power_of_two(uint32_t v)
{
    return v != 0 && (v & (v - 1)) == 0;
}

/* Reads one file pixel into BGRA order; 24bpp pixels become opaque. */
static void read_pixel(const uint8_t *src, uint32_t bytes_pp, uint8_t *dst)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = (bytes_pp == 4) ? src[3] : 0xFF;
}

static int decode_raw(const uint8_t *src, size_t avail, uint32_t count,
                      uint32_t bytes_pp, uint8_t *dst)
{
    if (avail / bytes_pp < count)
        return 0;
    for (uint32_t i = 0; i < count; i++)
        read_pixel(src + (size_t)i * bytes_pp, bytes_pp, dst + (size_t)i * 4);
    return 1;
}

static int decode_rle(const uint8_t *src, size_t avail, uint32_t count,
                      uint32_t bytes_pp, uint8_t *dst)
{
    size_t pos = 0;
    uint32_t done = 0;

    while (done < count) {
        if (pos >= avail)
            return 0;
        uint8_t packet = src[pos++];
        uint32_t run = (uint32_t)(packet & 0x7F) + 1;
        int is_repeat = (packet & TGA_RLE_PACKET_FLAG) != 0;
        size_t needed = (size_t)(is_repeat ? 1 : run) * bytes_pp;

        if (run > count - done || needed > avail - pos)
            return 0;
        for (uint32_t i = 0; i < run; i++) {
            size_t offset = pos + (is_repeat ? 0 : (size_t)i * bytes_pp);
            read_pixel(src + offset, bytes_pp, dst + (size_t)(done + i) * 4);
        }
        pos += needed;
        done += run;
    }
    return 1;
}

static int flip_rows(uint8_t *pixels, uint32_t width, uint32_t height)
{
    size_t row = (size_t)width * 4;
    uint8_t *tmp = malloc(row);

    if (!tmp)
        return 0;
    for (uint32_t y = 0; y < height / 2; y++) {
        uint8_t *a = pixels + y * row;
        uint8_t *b = pixels + (height - 1 - y) * row;
        memcpy(tmp, a, row);
        memcpy(a, b, row);
        memcpy(b, tmp, row);
    }
    free(tmp);
    return 1;
}

uint8_t *tga_decode_bgra(const uint8_t *file, size_t size,
                         uint32_t *out_width, uint32_t *out_height)
{
    if (size < TGA_HEADER_SIZE || file[1] != 0)
        return NULL;

    uint32_t type = file[2];
    uint32_t width = (uint32_t)file[12] | ((uint32_t)file[13] << 8);
    uint32_t height = (uint32_t)file[14] | ((uint32_t)file[15] << 8);
    uint32_t bpp = file[16];
    size_t data_start = (size_t)TGA_HEADER_SIZE + file[0];

    if ((type != TGA_TYPE_RGB && type != TGA_TYPE_RGB_RLE) ||
        (bpp != 24 && bpp != 32) ||
        !is_power_of_two(width) || !is_power_of_two(height) ||
        width > TGA_MAX_DIMENSION || height > TGA_MAX_DIMENSION ||
        data_start > size)
        return NULL;

    uint32_t count = width * height;
    uint8_t *pixels = malloc((size_t)count * 4);
    if (!pixels)
        return NULL;

    const uint8_t *data = file + data_start;
    size_t avail = size - data_start;
    int ok = (type == TGA_TYPE_RGB)
        ? decode_raw(data, avail, count, bpp / 8, pixels)
        : decode_rle(data, avail, count, bpp / 8, pixels);
    if (ok && !(file[17] & TGA_DESC_TOP_LEFT))
        ok = flip_rows(pixels, width, height);
    if (!ok) {
        free(pixels);
        return NULL;
    }

    *out_width = width;
    *out_height = height;
    return pixels;
}

#ifdef TGA_TEXTURE_TEST
#include <assert.h>
#include <stdio.h>

static void make_header(uint8_t *h, uint8_t type, uint8_t w, uint8_t ht,
                        uint8_t bpp, uint8_t desc)
{
    memset(h, 0, TGA_HEADER_SIZE);
    h[2] = type; h[12] = w; h[14] = ht; h[16] = bpp; h[17] = desc;
}

int main(void)
{
    uint32_t w = 0, h = 0;
    uint8_t f[64];

    /* 32bpp, top-left origin: bytes pass through in file order. */
    make_header(f, TGA_TYPE_RGB, 1, 2, 32, TGA_DESC_TOP_LEFT);
    memcpy(f + 18, "\x01\x02\x03\x04\x05\x06\x07\x08", 8);
    uint8_t *p = tga_decode_bgra(f, 26, &w, &h);
    assert(p && w == 1 && h == 2 && !memcmp(p, "\x01\x02\x03\x04\x05\x06\x07\x08", 8));
    free(p);

    /* Bottom-left origin flips the rows. */
    f[17] = 0;
    p = tga_decode_bgra(f, 26, &w, &h);
    assert(p && !memcmp(p, "\x05\x06\x07\x08\x01\x02\x03\x04", 8));
    free(p);

    /* 24bpp RLE: repeat run of 3, literal run of 1, alpha forced opaque. */
    make_header(f, TGA_TYPE_RGB_RLE, 2, 2, 24, TGA_DESC_TOP_LEFT);
    memcpy(f + 18, "\x82\x0A\x0B\x0C\x00\x0D\x0E\x0F", 8);
    p = tga_decode_bgra(f, 26, &w, &h);
    assert(p && !memcmp(p, "\x0A\x0B\x0C\xFF\x0A\x0B\x0C\xFF\x0A\x0B\x0C\xFF\x0D\x0E\x0F\xFF", 16));
    free(p);

    /* Malformed input is rejected, never read out of bounds. */
    assert(!tga_decode_bgra(f, 25, &w, &h));              /* truncated RLE literal */
    f[18] = 0xFF;
    assert(!tga_decode_bgra(f, 26, &w, &h));              /* run overflows image */
    make_header(f, TGA_TYPE_RGB, 3, 2, 32, 0);
    assert(!tga_decode_bgra(f, 64, &w, &h));              /* non power of two */
    make_header(f, 1, 2, 2, 32, 0);
    assert(!tga_decode_bgra(f, 64, &w, &h));              /* unsupported type */
    assert(!tga_decode_bgra(f, 4, &w, &h));               /* truncated header */
    make_header(f, TGA_TYPE_RGB, 2, 2, 32, 0);
    f[0] = 255;
    assert(!tga_decode_bgra(f, 64, &w, &h));              /* id field past EOF */

    puts("tga_texture: OK");
    return 0;
}
#endif
