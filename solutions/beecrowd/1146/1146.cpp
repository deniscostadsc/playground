#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t n, i;

    while (scanf("%d", &n) && n != 0) {
        printf("1");
        for (i = 2; i <= n; i++) {
            printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}
