#ifndef TGA_TEXTURE_H
#define TGA_TEXTURE_H

#include <stddef.h>
#include <stdint.h>

/* Decodes an uncompressed or RLE 24/32bpp power-of-two TGA into top-down BGRA.
 * Returns a malloc'd buffer the caller frees, or NULL on invalid input. */
uint8_t *tga_decode_bgra(const uint8_t *file, size_t size,
                         uint32_t *out_width, uint32_t *out_height);

#endif
