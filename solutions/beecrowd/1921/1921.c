#include <stdint.h>
#include <stdio.h>

int main() {
    uint64_t n;

    while (scanf("%lld", &n) != EOF) {
        printf("%lld\n", (n * (n - 1) / 2) - n);
    }

    return 0;
}
