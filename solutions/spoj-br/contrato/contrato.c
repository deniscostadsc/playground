#include <stdio.h>

int main() {
    int n, s, t;
    while ((t = getchar()) != '0') {
        getchar();
        s = 0;

        while ((n = getchar()) != '\n') {
            if (n != t) {
                s += n - '0';  // converts char to int and then sum to s
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
