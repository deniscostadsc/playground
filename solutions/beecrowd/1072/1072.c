#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t c, n, i = 0, o = 0;

    scanf("%d", &c);

    while (c--) {
        scanf("%d", &n);
        if (n > 9 && n < 21) {
            i++;
        } else {
            o++;
        }
    }

    printf("%d in\n", i);
    printf("%d out\n", o);

    return 0;
}
