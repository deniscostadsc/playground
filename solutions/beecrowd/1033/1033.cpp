#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>

// std::uint64_t memo_fib[263];
// std::uint64_t memo_calls[263];

void multiply(std::uint64_t fib[2][2], std::uint64_t aux[2][2]) {
    int x = fib[0][0] * aux[0][0] + fib[0][1] * aux[1][0];
    int y = fib[0][0] * aux[0][1] + fib[0][1] * aux[1][1];
    int z = fib[1][0] * aux[0][0] + fib[1][1] * aux[1][0];
    int w = fib[1][0] * aux[0][1] + fib[1][1] * aux[1][1];

    fib[0][0] = x;
    fib[0][1] = y;
    fib[1][0] = z;
    fib[1][1] = w;
}

void power(std::uint64_t fib[2][2], std::uint64_t n) {
    std::uint64_t aux[2][2] = {{1, 1}, {1, 0}};

    for (int i = 2; i <= n; i++) {
        multiply(fib, aux);
    }
}

std::uint64_t fib(std::uint64_t n) {
    if (n == 0) {
        return 0;
    }

    std::uint64_t fib[2][2] = {{1, 1}, {1, 0}};

    power(fib, n - 1);

    return fib[0][0];
}

std::uint64_t leonardo(std::uint64_t n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return 2 * fib(n + 1) - 1;
}

int main() {
    std::uint64_t n;
    std::int16_t b, t;

    // memset(memo_calls, 0, sizeof(memo_calls));
    // memset(memo_fib, 0, sizeof(memo_fib));

    // memo_fib[0] = 0;
    // memo_fib[1] = 1;
    // memo_calls[0] = 1;
    // memo_calls[1] = 1;

    t = 1;

    while (std::cin >> n >> b && n || b) {
        std::cout << "Case " << t << ": " << n << " " << b << " "
                  << leonardo(n) % b << std::endl;

        t++;
    }

    return 0;
}
