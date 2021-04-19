#include <cmath>
#include <iostream>

bool is_prime(long n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0 || n < 2) {
        return false;
    }

    for (long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long x;
    int n;

    std::cin >> n;

    while (n--) {
        std::cin >> x;

        if (is_prime(x)) {
            std::cout << x << " eh primo" << std::endl;
        } else {
            std::cout << x << " nao eh primo" << std::endl;
        }
    }

    return 0;
}
