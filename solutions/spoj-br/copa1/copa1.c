#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t a, b, i, j = 8, t = 1, l = 1;
    char c[] = "ABCDEFGHIJKLMNOP";

    while (scanf("%d %d", &a, &b) != EOF) {
        if (a > b) {
            for (i = 0; i < t; i++) {
                c[(l - 1) * 2 * t + t + i] = '0';
            }
        } else {
            for (i = 0; i < t; i++) {
                c[(l - 1) * 2 * t + i] = '0';
            }
        }
        if (l >= j) {
            j /= 2;
            t *= 2;
            l = 0;
        }
        l++;
    }

    for (i = 0; i <= 15; i++) {
        if (c[i] != '0') {
            printf("%c", c[i]);
            break;
        }
    }
    return 0;
}
