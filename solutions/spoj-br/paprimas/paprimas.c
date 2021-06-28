#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int16_t is_prime(int16_t n) {
    int16_t i;

    // 1 não é primo,
    // mas o problema acha que é 8(
    if (n == 2 || n == 1) {
        return 1;
    }
    if (n % 2 == 0 || n < 1) {
        return 0;
    }

    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int16_t i, j, s;
    char p[21];
    char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (scanf("%s", p) != EOF) {
        s = 0;
        for (i = 0; i < strlen(p); i++) {
            for (j = 0; j <= 51; j++) {
                if (p[i] == l[j]) {
                    s += j + 1;
                    break;
                }
            }
        }
        if (is_prime(s)) {
            printf("It is a prime word.\n");
        } else {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
