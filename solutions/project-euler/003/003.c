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
    int16_t i;
    int32_t n = 600851475143;
    int32_t r;

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && is_prime(i)) {
            r = i;
        }
    }
    printf("%lld\n", r);

    return 0;
}
