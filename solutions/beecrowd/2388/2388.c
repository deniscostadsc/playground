#include <stdint.h>
#include <stdio.h>

int main() {
    int32_t distance;
    int16_t n, t, v;

    while (scanf("%d", &n) != EOF) {
        distance = 0;
        for (int16_t i = 0; i < n; i++) {
            scanf("%d %d", &t, &v);
            distance += t * v;
        }
        printf("%d\n", distance);
    }
    return 0;
}
