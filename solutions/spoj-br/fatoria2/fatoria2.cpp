#include <cstdint>
#include <cstdio>

std::int32_t fat(std::int32_t n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fat(n - 1);
}

int main() {
    std::int16_t n;

    scanf("%d", &n);

    printf("%d\n", fat(n));

    return 0;
}
