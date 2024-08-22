#include <stdint.h>
#include <stdio.h>

int main() {
    double s = 1.0, x = 2.0;
    int16_t i;

    for (i = 3; i <= 39; i += 2) {
        s += i / x;
        x *= 2;
    }

    printf("%.2lf\n", s);

    return 0;
}
