#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t n, i;

    while (scanf("%d", &n) != EOF) {
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                printf("%d\n", i);
            }
        }

        printf("%d\n", n);
    }

    return 0;
}
