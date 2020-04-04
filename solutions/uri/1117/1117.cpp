#include <cstdio>

int
    main() {
    float n, s = 0.0;
    int c = 0;
    while (c < 2) {
        scanf("%f", &n);
        if (n >= 0.0 && n <= 10.0) {
            c++;
            s += n;
        } else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", s / 2.0);
    return 0;
}
