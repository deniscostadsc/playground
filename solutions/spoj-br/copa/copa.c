#include <stdio.h>

int16_t main() {
    int16_t t, j, n, s;
    char x[10];
    while (scanf("%d %d", &t, &j) && t != 0) {
        s = 0;
        while (t--) {
            scanf("%s %d", x, &n);
            s += n;
        }
        printf("%d\n", j * 3 - s);
    }
    return 0;
}
