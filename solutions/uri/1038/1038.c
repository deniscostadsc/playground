#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t n, q;

    scanf("%d %d", &n, &q);

    if (n == 1) {
        printf("Total: R$ %.2f\n", 4.00 * q);
    } else if (n == 2) {
        printf("Total: R$ %.2f\n", 4.50 * q);
    } else if (n == 3) {
        printf("Total: R$ %.2f\n", 5.00 * q);
    } else if (n == 4) {
        printf("Total: R$ %.2f\n", 2.00 * q);
    } else {
        printf("Total: R$ %.2f\n", 1.50 * q);
    }

    return 0;
}
