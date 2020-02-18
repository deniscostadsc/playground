#include <iostream>
#include <cmath>

unsigned long long fib(unsigned long long n) {
    return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5.0);
}

int main() {
    unsigned long long n;

    while (std::cin >> n) {
        std::cout << fib(n) << ".0" << std::endl;
    }

    return 0;
}
