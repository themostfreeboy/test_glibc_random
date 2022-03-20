#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "myrand.h"

static constexpr int FOR_TIMES = 10;

int main(int argc, char** argv) {
    unsigned int srand_value = (unsigned int)time(NULL);
    printf("srand_value=%u\n", srand_value);

    srand((unsigned int)(srand_value));
    mysrand((unsigned int)(srand_value));

    for (int i = 0; i < FOR_TIMES; ++i) {
        printf("i=%d, glibc_rand=%d, my_rand=%ld\n", i, rand(), myrand());
    }
    return 0;
}
