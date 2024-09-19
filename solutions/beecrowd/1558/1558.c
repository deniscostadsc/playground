#include <math.h>
#include <stdint.h>
#include <stdio.h>

int has_square(int32_t n) {
    int32_t limit = sqrt(n);

    if (n < 0) {
        return 0;
    }

    for (int32_t i = 0; i <= limit; i++) {
        for (int32_t j = 0; j <= limit; j++) {
            if (pow(i, 2) + pow(j, 2) == n) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int32_t n;

    while (scanf("%ld", &n) != EOF) {
        if (has_square(n)) {
            puts("YES");
        } else {
            puts("NO");
        }
    }

    return 0;
}
