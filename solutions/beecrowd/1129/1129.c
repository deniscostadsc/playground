#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t i, n, o[5], c, r;
    char l[] = "ABCDE";

    while (scanf("%d", &n) && n != 0) {
        while (n--) {
            scanf("%d %d %d %d %d", &o[0], &o[1], &o[2], &o[3], &o[4]);
            c = 0;
            for (i = 0; i <= 4; i++) {
                if (o[i] <= 127) {
                    r = i;
                    c++;
                }
            }

            if (c != 1) {
                puts("*");
            } else {
                // buggy code was printing non readable characters
                if (r == 0) {
                    printf("A\n");
                } else if (r == 1) {
                    printf("B\n");
                } else {
                    printf("%c\n", l[r]);
                }
            }
        }
    }

    return 0;
}
