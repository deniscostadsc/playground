#include <math.h>
#include <stdio.h>

int16_t is_prime(int32_t n) {
    int32_t i;

    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0 || n < 2) {
        return 0;
    }

    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int16_t main() {
    int32_t n;

    scanf("%ld", &n);
    if (is_prime(n)) {
        printf("sim");
    } else {
        printf("nao");
    }

    return 0;
}
