#include <cstdint>
#include <cstdio>

std::int64_t f[61];

std::int64_t fib(std::int32_t n) {
    if (f[n] != -1) {
        return f[n];
    }
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}

int main() {
    std::int16_t i, j;
    std::int64_t n;
    for (j = 0; j <= 60; j++) {
        f[j] = -1;
    }
    f[0] = 0;
    f[1] = 1;

    scanf("%d", &i);
    while (i--) {
        scanf("%lld", &n);
        printf("Fib(%lld) = %lld\n", n, fib(n));
    }
    return 0;
}
