#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }

    return 0;
}
