#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t a, b;
    float c, s = 0.0;

    while (scanf("%d %d %f", &a, &b, &c) != EOF) {
        s += c * b;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", s);
}
