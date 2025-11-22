#include <stdint.h>
#include <stdio.h>

int main() {
    uint64_t first, last;

    while (scanf("%lld %lld", &first, &last) != EOF) {
        printf("%lld\n", (last - first + 1) * (first + last) / 2);
    }

    return 0;
}
