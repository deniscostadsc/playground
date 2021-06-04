#include <math.h>
#include <stdio.h>

int main() {
    double r1, x1, y1, r2, x2, y2;
    double distance;

    while (scanf("%lf %lf %lf %lf %lf %lf", &r1, &x1, &y1, &r2, &x2, &y2)
           != EOF) {
        distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

        if (r1 >= distance + r2) {
            puts("RICO");
        } else {
            puts("MORTO");
        }
    }

    return 0;
}
