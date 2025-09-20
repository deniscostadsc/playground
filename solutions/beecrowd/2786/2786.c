#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t l, c;

    while (scanf("%d", &l) != EOF) {
        scanf("%d", &c);
        printf("%d\n%d\n", (l * c) + ((l - 1) * (c - 1)), ((l - 1) * 2) + ((c - 1) * 2));
    }

    return 0;
}
