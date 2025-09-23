#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    int16_t d[31], e[31], n, p, t, i;
    char l;

    while (scanf("%d", &n) != EOF) {
        memset(d, 0, sizeof(d));
        memset(e, 0, sizeof(e));

        while (n--) {
            scanf("%d %c", &p, &l);
            if (l == 'E') {
                e[p - 30]++;
            } else {
                d[p - 30]++;
            }
        }

        t = 0;
        for (i = 0; i <= 30; i++) {
            if (e[i] < d[i]) {
                t += e[i];
            } else {
                t += d[i];
            }
        }
        printf("%d\n", t);
    }

    return 0;
}
