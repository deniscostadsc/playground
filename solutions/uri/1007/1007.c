#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("DIFERENCA = %d\n", a * b - c * d);

    return 0;
}
