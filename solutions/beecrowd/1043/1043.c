#include <stdio.h>

int main() {
    float a, b, c;

    while (scanf("%f %f %f", &a, &b, &c) != EOF) {
        if (a < b + c && b < a + c && c < a + b) {
            printf("Perimetro = %.1f\n", a + b + c);
        } else {
            printf("Area = %.1f\n", c * (a + b) / 2);
        }
    }

    return 0;
}
