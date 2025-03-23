#include <stdint.h>
#include <stdio.h>

int main() {
    int64_t x, y, a;

    while (scanf("%d", &x) != EOF) {
        scanf("%d", &y);

        if (x > y) {
            a = x;
            x = y;
            y = a;
        }

        for (int64_t i = x + 1; i < y; i++) {
            if (i % 5 == 2 || i % 5 == 3) {
                printf("%lld\n", i);
            }
        }
    }

    return 0;
}
