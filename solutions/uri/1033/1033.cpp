#include <iostream>
#include <cmath>
#include <cstring>

unsigned long long memo_fib[2000];
unsigned long long memo_calls[2000];

long long fib(long long n) {
    return round((pow((1 + sqrt(5)) / 2, n)) / sqrt(5) + 1/2);
}

long long recursive_fib(long long n) {
    if (memo_calls[n]) return memo_fib[n];

    memo_fib[n] = fib(n - 1) + fib(n - 2);
    memo_calls[n] = memo_calls[n - 1] + memo_calls[n - 2] + 1;
    return memo_fib[n];
}

int main() {
    memset(memo_calls, 0, sizeof(memo_calls));

    memo_fib[0] = 0;
    memo_fib[1] = 1;
    memo_calls[0] = 1;
    memo_calls[1] = 1;

    for (int i = 0; i < 2000; i++) {
        std::cout << fib(i) << std::endl;
        if (fib(i) != recursive_fib(i)) {
            std::cout << "fudeu " << std::endl;
            break;
        }

    }

    return 0;
}
