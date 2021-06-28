#include <math.h>
#include <stdio.h>

int16_t main() {
    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - 4 * a * c;
    if (delta >= 0 && a != 0) {
        printf("R1 = %.5lf\n", ((b * -1) + sqrt(delta)) / (2 * a));
        printf("R2 = %.5lf\n", ((b * -1) - sqrt(delta)) / (2 * a));
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
