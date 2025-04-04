#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t a, b, c;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (!a) {
            break;
        }

        printf("%d\n", (int16_t)pow(a * b * c, 1.0 / 3.0));
    }

    return 0;
}
