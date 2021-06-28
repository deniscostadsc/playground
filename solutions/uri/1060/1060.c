#include <stdio.h>

int16_t main() {
    float n;
    int16_t c = 0;
    while (scanf("%f", &n) != EOF) {
        if (n > 0) {
            c++;
        }
    }
    printf("%d valores positivos\n", c);
    return 0;
}
