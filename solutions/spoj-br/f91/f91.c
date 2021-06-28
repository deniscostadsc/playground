#include <stdint.h>
#include <stdio.h>
#include <string.h>

int16_t r[1000000];

int16_t f91(int16_t n) {
    if (r[n] != 0) {
        return r[n];
    }
    if (n >= 101) {
        r[n] = n - 10;
    } else {
        r[n] = f91(f91(n + 11));
    }

    return r[n];
}

int main() {
    int16_t n;

    memset(r, 0, sizeof(r));

    while (scanf("%d", &n) && n != 0) {
        printf("f91(%d) = %d\n", n, f91(n));
    }

    return 0;
}
