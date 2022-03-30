#include <cstdint>
#include <cstdio>
#include <cstring>

std::int32_t f[39];
std::int32_t r[39];

std::int32_t fib(std::int32_t n) {
    if (n == 0) {
        return f[0];
    }

    if (f[n] != 0) {
        return f[n];
    }

    f[n] = fib(n - 1) + fib(n - 2);
    r[n] = r[n - 1] + r[n - 2] + 2;

    return f[n];
}

int main() {
    std::int16_t i, j;
    std::int32_t n;

    memset(f, 0, sizeof(f));
    memset(r, 0, sizeof(r));
    f[1] = 1;

    scanf("%d", &i);
    while (i--) {
        scanf("%ld", &n);
        printf("fib(%ld) = %ld calls = %ld\n", n, r[n], fib(n));
    }

    return 0;
}
