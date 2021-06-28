#include <stdio.h>
#include <stdint.h>

int main() {
    int16_t n, s, t;
    while ((t = getchar()) != '0') {
        getchar();
        s = 0;

        while ((n = getchar()) != '\n') {
            if (n != t) {
                s += n - '0';  // converts char to int16_t and then sum to s
                if (s != 0) {
                    printf("%c", n);
                }
            }
        }

        if (s == 0) {
            printf("%d", 0);
        }
        printf("\n");
    }
    return 0;
}
