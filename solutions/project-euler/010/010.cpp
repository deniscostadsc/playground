#include <cmath>
#include <iostream>

bool is_prime(unsigned long n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0 || n < 2) {
        return false;
    }

    for (unsigned long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    unsigned int i;
    unsigned long long sum = 2;

    for (i = 3; i < 2000000; i += 2) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
