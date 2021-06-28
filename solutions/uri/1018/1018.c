#include <stdio.h>

int16_t main() {
    int16_t d[] = {100, 50, 20, 10, 5, 2, 1};
    int16_t n, t = 0;

    scanf("%d", &n);
    printf("%d\n", n);
    do {
        printf("%d nota(s) de R$ %d,00\n", n / d[t], d[t]);
        if (n >= d[t]) {
            n -= d[t] * (n / d[t]);
        }
    } while (d[t++] != 1);

    return 0;
}
