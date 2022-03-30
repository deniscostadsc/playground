#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t v, t;

    while (scanf("%d %d", &v, &t) != EOF) {
        printf("%d\n", v * t * 2);
    }

    return 0;
}
