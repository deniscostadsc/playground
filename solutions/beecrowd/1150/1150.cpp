#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t x, s = 0, z, n = 0;

    scanf("%d", &x);

    while (scanf("%d", &z) && z <= x) {
    }

    for (std::int16_t i = x; s <= z; i++) {
        s += x++;
        n++;
    }

    printf("%d\n", n);

    return 0;
}
