#include <stdint.h>
#include <stdio.h>

int main() {
    int32_t n, i, f, x, j, s;

    scanf("%d", &n);

    while (n--) {
        s = 0;

        scanf("%d %d", &i, &f);

        if (i > f) {
            x = i;
            i = f;
            f = x;
        }

        i++;

        if (i % 2 == 0) {
            i++;
        }

        for (j = i; j < f; j += 2) {
            s += j;
        }

        printf("%d\n", s);
    }

    return 0;
}
