#include <stdio.h>

int16_t main() {
    u_int16_t a, b;

    while (scanf("%u %u", &a, &b) != EOF) {
        printf("%u\n", a ^ b);
    }

    return 0;
}
