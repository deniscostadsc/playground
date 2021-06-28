#include <math.h>
#include <stdio.h>

int16_t main() {
    float x1, y1, x2, y2;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    printf("%.4f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}
