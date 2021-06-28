#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t a, b;

    while (scanf("%u %u", &a, &b) != EOF) {
        printf("%u\n", a ^ b);
    }

    return 0;
}
