#include <cstdio>

int
    main() {
    int x, y, i, j;
    scanf("%d %d", &x, &y);
    i = 1;
    while (i <= y) {
        for (j = 0; j < x; j++) {
            if (i > y)
                break;
            if (j == 0)
                printf("%d", i++);
            else
                printf(" %d", i++);
        }
        printf("\n");
    }
    return 0;
}
