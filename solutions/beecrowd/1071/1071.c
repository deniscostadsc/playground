#include <stdint.h>
#include <stdio.h>

int main() {
    int64_t x, y, s;

    while (scanf("%lld", &x) != EOF && scanf("%lld", &y) != EOF) {
        if (x > y) {
            int64_t temp = x;
            x = y;
            y = temp;
        }

        x++;
        if (x % 2 == 0) {
            x++;
        }

        s = 0;
        for (int64_t i = x; i < y; i += 2) {
            s += i;
        }

        printf("%d\n", s);
    }

    return 0;
}
