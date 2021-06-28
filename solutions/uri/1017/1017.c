#include <math.h>
#include <stdio.h>

int16_t main() {
    float h, s;

    scanf("%f", &h);
    scanf("%f", &s);

    printf("%.3f\n", h * s / 12.0);
}
