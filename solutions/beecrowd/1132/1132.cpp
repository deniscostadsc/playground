#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t d, t, i, s = 0;
    while (scanf("%d", &d) != EOF) {
        scanf("%d", &t);

        std::int32_t s = 0;

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
}
