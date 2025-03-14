#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t n, c = 0, i = 5;

    while (i--) {
        scanf("%d", &n);

        if (n % 2 == 0) {
            c++;
        }
    }

    printf("%d valores pares\n", c);

    return 0;
}
