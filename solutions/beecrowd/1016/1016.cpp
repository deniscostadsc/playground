#include <cmath>
#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t n;

    scanf("%d", &n);

    printf("%d minutos\n", 150 / 60 * n);
}
