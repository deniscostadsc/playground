#include <cstdint>
#include <cstdio>
#include <cstdlib>

int64_t gcd(int64_t x, int64_t y) {
    if (y == 0) {
        return x;
    }

    return gcd(y, x % y);
}

int64_t lcm(int64_t x, int64_t y) {
    return abs(x) / gcd(x, y) * abs(y);
}

int64_t lcm_many(int32_t numbers[], int32_t n) {
    int16_t i;
    int64_t result = numbers[0];

    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    return result;
}

int main() {
    int32_t numbers[] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                         11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    printf("%ld\n", lcm_many(numbers, 20));

    return 0;
}
