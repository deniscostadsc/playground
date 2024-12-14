#include <stdint.h>
#include <stdio.h>

int main() {
    float o, b, i;

    while (scanf("%f %f %f", &o, &b, &i) != EOF) {
        if (o < b && o < i) {
            puts("Otavio");
        } else if (b < o && b < i) {
            puts("Bruno");
        } else if (i < o && i < b) {
            puts("Ian");
        } else {
            puts("Empate");
        }
    }
    return 0;
}
