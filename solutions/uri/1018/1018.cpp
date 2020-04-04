#include <cstdio>

int
    main() {
    int d[] = {100, 50, 20, 10, 5, 2, 1};
    int n, t = 0;

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
