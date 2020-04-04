#include <cstdio>

int
    main() {
    int i = 1, j = 7;

    while (i <= 9) {
        printf("I=%d J=%d\n", i, j--);
        printf("I=%d J=%d\n", i, j--);
        printf("I=%d J=%d\n", i, j--);

        i += 2;
        j += 5;
    }

    return 0;
}
