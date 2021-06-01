#include <stdio.h>

int main() {
    float a, b;

    scanf("%f", &a);
    scanf("%f", &b);

    printf("MEDIA = %.5f\n", (a * 3.5 + b * 7.5) / 11.0);

    return 0;
}
