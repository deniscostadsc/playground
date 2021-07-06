#include <cmath>
#include <cstdint>
#include <cstring>
#include <iostream>

uint64_t memo_fib[263];
uint64_t memo_calls[263];

int64_t fib(int64_t n) {
    if (n == 0 || memo_calls[n]) {
        return memo_fib[n];
    }

    memo_fib[n] = fib(n - 1) + fib(n - 2);
    memo_calls[n] = memo_calls[n - 1] + memo_calls[n - 2] + 1;

    return memo_fib[n];
}

int main() {
    uint64_t n;
    int16_t b;

    memset(memo_calls, 0, sizeof(memo_calls));
    memset(memo_fib, 0, sizeof(memo_fib));

    memo_fib[0] = 0;
    memo_fib[1] = 1;
    memo_calls[0] = 1;
    memo_calls[1] = 1;

    while (std::cin >> n >> b && n && b) {
        std::cout << fib(n) << std::endl;
    }

    return 0;
}
