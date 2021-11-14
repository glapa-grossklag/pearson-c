# Pearson Hash

A collection of 8, 16, 32, and 64-bit [Pearson
hash](https://en.wikipedia.org/wiki/Pearson_hashing) functions:

```c
uint8_t  Pearson8 (const unsigned char *key, size_t length);
uint16_t Pearson16(const unsigned char *key, size_t length);
uint32_t Pearson32(const unsigned char *key, size_t length);
uint64_t Pearson64(const unsigned char *key, size_t length);
```

There is also the following function, which returns a `size_t`, the most-common
type used for indexing:

```c
size_t Pearson(const unsigned char *key, size_t length);
```
