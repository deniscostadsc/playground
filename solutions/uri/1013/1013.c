#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int16_t a, b, c, m;

    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        m = (a + b + abs(a - b)) / 2;
        m = (m + c + abs(m - c)) / 2;

        printf("%d eh o maior\n", m);
    }
}
