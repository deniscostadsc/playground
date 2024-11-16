#include <stdint.h>
#include <stdio.h>

int main() {
    int16_t n, i;

    while (scanf("%d", &n) != EOF) {
        for (i = 1; i <= n; i += 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}
