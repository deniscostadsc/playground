#include <cstdint>
#include <cstdio>

int main() {
    int16_t d, t, i, s = 0;
    scanf("%d", &d);
    scanf("%d", &t);

    if (d < t) {
        for (i = d; i <= t; i++) {
            if (i % 13 != 0) {
                s += i;
            }
        }
    } else {
        for (i = t; i <= d; i++) {
            if (i % 13 != 0) {
                s += i;
            }
        }
    }
    printf("%d\n", s);
}
