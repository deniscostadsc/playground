#include <cstdio>

int
    main() {
    float n;

    scanf("%f", &n);

    if (n <= 400.0) {
        printf(
            "Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",
            n * 1.15,
            n * 1.15 - n);
    } else if (n <= 800.0) {
        printf(
            "Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",
            n * 1.12,
            n * 1.12 - n);
    } else if (n <= 1200.0) {
        printf(
            "Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",
            n * 1.10,
            n * 1.10 - n);
    } else if (n <= 2000.0) {
        printf(
            "Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",
            n * 1.07,
            n * 1.07 - n);
    } else {
        printf(
            "Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",
            n * 1.04,
            n * 1.04 - n);
    }

    return 0;
}
