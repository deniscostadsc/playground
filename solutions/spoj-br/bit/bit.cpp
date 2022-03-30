#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t n, c = 0, b[] = {50, 10, 5, 1};

    while (scanf("%d", &n) && n != 0) {
        printf("Teste %d\n", ++c);

        for (std::int16_t i = 0; i <= 3; i++) {
            printf("%d", n / b[i]);

            n %= b[i];

            if (i < 3) {
                printf(" ");
            }
        }

        printf("\n\n");
    }

    return 0;
}
