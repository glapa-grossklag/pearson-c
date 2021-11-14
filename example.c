#include <stdlib.h>
#include <stdio.h>

#include "pearson.h"


int main(void) {
    unsigned char key[] = "Hello, world!";
    const size_t length = sizeof(key) / sizeof(key[0]);

    printf("Key: %s\n", key);

    printf("8: %x\n", Pearson8(key, length));
    printf("16: %x\n", Pearson16(key, length));
    printf("32: %x\n", Pearson32(key, length));
    printf("64: %lx\n", Pearson64(key, length));
    printf("size_t: %zx\n", Pearson(key, length));
}
