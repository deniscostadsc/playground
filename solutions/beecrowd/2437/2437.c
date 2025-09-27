#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int16_t x_m, y_m, x_r, y_r;

    while (scanf("%d %d %d %d", &x_m, &y_m, &x_r, &y_r) != EOF) {
        printf("%d\n", abs(x_r - x_m) + abs(y_r - y_m));
    }

    return 0;
}
