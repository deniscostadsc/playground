#include <stdint.h>
#include <stdio.h>

int gcd(int a, int b) {
    int32_t x;

    while (b > 0) {
        x = b;
        b = a % b;
        a = x;
    }

    return a;
}

int main() {
    int32_t n, a, b;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &a, &b);

        printf("%d\n", gcd(a, b));
    }

    return 0;
}
