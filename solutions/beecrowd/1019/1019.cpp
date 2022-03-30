#include <cstdint>
#include <cstdio>

int main() {
    std::int32_t t, h = 0, m = 0;

    while (scanf("%d", &t) != EOF) {
        if (t >= 60 * 60) {
            h = t / (60 * 60);
            t %= (60 * 60);
        }
        if (t >= 60) {
            m = t / 60;
            t %= 60;
        }

        printf("%d:%d:%d\n", h, m, t);
        h = 0, m = 0;
    }

    return 0;
}
