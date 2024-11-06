#include <cstdint>
#include <cstdio>

int main() {
    std::int16_t a, b, c, d;

    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF) {
        if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0) {
            printf("Valores aceitos\n");
        } else {
            printf("Valores nao aceitos\n");
        }
    }

    return 0;
}
