#include <stdint.h>
#include <stdio.h>

int max(int16_t a, int16_t b) {
    if (a > b) return a;
    return b;
}

int min(int16_t a, int16_t b) {
    if (a < b) return a;
    return b;
}

int main() {
    int16_t d, t, i, s = 0;
    while(scanf("%d", &d) != EOF) {
        scanf("%d", &t);

        int32_t s = 0;

        for (i = min(d, t); i <= max(d, t); i++) {
            if (i % 13 != 0) {
                s += i;
            }
        }

        printf("%d\n", s);
    }
}
