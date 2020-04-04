#include <cstdio>

int
    main() {
    int c = 5, x, p = 0, n = 0, e = 0, o = 0;

    while (c--) {
        scanf("%d", &x);

        if (x < 0) {
            n++;
        } else if (x > 0) {
            p++;
        }
        if (x % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", o);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);

    return 0;
}
