#include <stdio.h>
#include <stdint.h>

int main() {
    int16_t n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}
