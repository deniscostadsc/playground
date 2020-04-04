#include <cstdio>

int
    main() {
    int t, h = 0, m = 0, s = 0;
    scanf("%d", &t);
    if (t >= 60 * 60) {
        h = t / (60 * 60);
        t %= (60 * 60);
    }
    if (t >= 60) {
        m = t / 60;
        t %= 60;
    }
    s = t;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
