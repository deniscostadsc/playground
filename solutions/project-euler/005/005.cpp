#include <cstdint>
#include <cstdio>
#include <cstdlib>

std::int64_t gcd(std::int64_t x, std::int64_t y) {
    if (y == 0) {
        return x;
    }

    return gcd(y, x % y);
}

std::int64_t lcm(std::int64_t x, std::int64_t y) {
    return abs(x) / gcd(x, y) * abs(y);
}

std::int64_t lcm_many(std::int32_t numbers[], std::int32_t n) {
    std::int16_t i;
    std::int64_t result = numbers[0];

    for (i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    return result;
}

int main() {
    std::int32_t numbers[] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                         11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    printf("%ld\n", lcm_many(numbers, 20));

    return 0;
}
