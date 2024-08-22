#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t x, s;

    while (scanf("%d", &x) && x != 0) {
        s = 0;

        if (x % 2 != 0) {
            x++;
        }

        for (int16_t i = 0; i <= 4; i++, x += 2) {
            s += x;
        }

        printf("%d\n", s);
    }
    return 0;
}
