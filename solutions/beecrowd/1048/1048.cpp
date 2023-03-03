#include <cstdio>

int main() {
    float n;

    while (scanf("%f", &n) != EOF) {
        if (n <= 400.0) {
            printf("Novo salario: %.2f\n", n * 1.15);
            printf("Reajuste ganho: %.2f\n", n * 1.15 - n);
            puts("Em percentual: 15 %");
        } else if (n <= 800.0) {
            printf("Novo salario: %.2f\n", n * 1.12);
            printf("Reajuste ganho: %.2f\n", n * 1.12 - n);
            puts("Em percentual: 12 %");
        } else if (n <= 1200.0) {
            printf("Novo salario: %.2f\n", n * 1.10);
            printf("Reajuste ganho: %.2f\n", n * 1.10 - n);
            puts("Em percentual: 10 %");
        } else if (n <= 2000.0) {
            printf("Novo salario: %.2f\n", n * 1.07);
            printf("Reajuste ganho: %.2f\n", n * 1.07 - n);
            puts("Em percentual: 7 %");
        } else {
            printf("Novo salario: %.2f\n", n * 1.04);
            printf("Reajuste ganho: %.2f\n", n * 1.04 - n);
            puts("Em percentual: 4 %");
        }
    }

    return 0;
}
