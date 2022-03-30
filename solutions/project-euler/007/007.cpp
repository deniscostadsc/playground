#include <cmath>
#include <cstdint>
#include <iostream>

bool is_prime(std::uint64_t n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0 || n < 2) {
        return false;
    }

    for (std::uint32_t i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::int16_t c = 0;
    std::uint64_t n = 1;

    while (n++) {
        if (is_prime(n)) {
            c++;
        }
        if (c == 10001) {
            std::cout << n << std::endl;
            break;
        }
    }
    return 0;
}
