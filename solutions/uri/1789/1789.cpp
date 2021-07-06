#include <cstdint>
#include <cstdio>

int main() {
    int16_t l, v, fastest;

    while (scanf("%d", &l) != EOF) {
        fastest = 0;

        while (l--) {
            scanf("%d", &v);

            if (v > fastest) {
                fastest = v;
            }
        }

        if (fastest < 10) {
            puts("1");
        } else if (fastest < 20) {
            puts("2");
        } else {
            puts("3");
        }
    }

    return 0;
}
