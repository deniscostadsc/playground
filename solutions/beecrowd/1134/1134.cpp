#include <cstdint>
#include <cstdio>

int main() {
    std::int32_t n, v[] = {0, 0, 0};

    while (scanf("%d", &n) && n != 4) {
        if (n >= 1 && n <= 3) {
            v[n - 1]++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", v[0]);
    printf("Gasolina: %d\n", v[1]);
    printf("Diesel: %d\n", v[2]);

    return 0;
}
