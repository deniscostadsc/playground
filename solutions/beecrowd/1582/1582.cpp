#include <cstdint>
#include <cstdio>

int16_t gcd(int16_t x, int16_t y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int16_t gcd_tri(int16_t x, int16_t y, int16_t z) {
    return gcd(x, gcd(y, z));
}

bool is_pythagorean_triple(int16_t x, int16_t y, int16_t z) {
    if (x > y && x > z) {
        return x * x == (y * y) + (z * z);
    } else if (y > z) {
        return y * y == (x * x) + (z * z);
    }
    return z * z == (x * x) + (y * y);
}

int main() {
    int16_t x, y, z;

    while (scanf("%d %d %d", &x, &y, &z) != EOF) {
        printf("tripla");
        if (is_pythagorean_triple(x, y, z)) {
            printf(" pitagorica");
            if (gcd_tri(x, y, z) == 1) {
                printf(" primitiva");
            }
        }
        puts("");
    }

    return 0;
}
