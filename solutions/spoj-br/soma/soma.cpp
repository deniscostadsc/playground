#include <cstdio>

int
    main() {
    int i, n, s = 0;
    scanf("%d", &i);
    while (i--) {
        scanf("%d", &n);
        s += n;
    }
    printf("%d\n", s);
    return 0;
}
