# Pearson Hash

The [Pearson hash function](https://en.wikipedia.org/wiki/Pearson_hashing) is a
cryptographically-weak hash function designed for quick execution. One of the
primary benefits is that the hash function can produce a hash of arbitrary
byte-length, as demonstrated in this library.


# Interface

A collection of 8, 16, 32, and 64-bit hash functions:

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

An example is available [here](./src/example.c).

# Analysis

The [Avalanche effect](https://en.wikipedia.org/wiki/Avalanche_effect) is a
desirable property of hash functions, wherein if a single bit of the input is
flipped, each bit of the of output should change with a 50% probability. When
this test is performed on the functions above, each bit of the output changes
with a 50.2%. This is clearly not ideal, however this isn't bad for a
hash function that isn't intended to be cryptographically strong.
