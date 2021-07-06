#include <cstdint>
#include <cstdio>

int main() {
    int16_t x, y, z, d;

    while (scanf("%d.%d.%d-%d", &x, &y, &z, &d) != EOF) {
        printf("%03d\n", x);
        printf("%03d\n", y);
        printf("%03d\n", z);
        printf("%02d\n", d);
    }
    return 0;
}
