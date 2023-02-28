#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t a, b;

    while (scanf("%d %d", &a, &b) != EOF) {
        if (a % b == 0 || b % a == 0) {
            puts("Sao Multiplos");
        } else {
            puts("Nao sao Multiplos");
        }
    }

    return 0;
}
