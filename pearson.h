#ifndef PEARSON_H
#define PEARSON_H

#include <stddef.h>
#include <stdint.h>

uint8_t Pearson8(const unsigned char *key, size_t length);
uint16_t Pearson16(const unsigned char *key, size_t length);
uint32_t Pearson32(const unsigned char *key, size_t length);
uint64_t Pearson64(const unsigned char *key, size_t length);
size_t Pearson(const unsigned char *key, size_t length);

#endif
