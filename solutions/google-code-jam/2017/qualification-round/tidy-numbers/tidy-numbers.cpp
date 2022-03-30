#include <cstdint>
#include <iostream>

std::uint64_t decrease_n(std::uint64_t n) {
    std::uint64_t subtraction_term = 0;

    if (n % 100 == 10) {
        std::uint64_t n_copy = n;
        n_copy /= 10;
        while (n_copy && n_copy % 10 == 1) {
            n_copy /= 10;
            subtraction_term = subtraction_term * 10 + 1;
        }
        if (n_copy % 10 > 1) {
            subtraction_term = subtraction_term * 10 + 1;
        }
        return n - subtraction_term;
    }

    return n - 1;
}

bool is_tidy(std::uint64_t n) {
    if (n <= 9) {
        return true;
    }

    std::int16_t current, previous;

    previous = n % 10;
    n /= 10;

    while (n > 0) {
        current = n % 10;
        n /= 10;
        if (previous < current) {
            return false;
        }
        previous = current;
    }

    return true;
}

int main() {
    std::int16_t t, i;
    std::uint64_t n;

    std::cin >> t;

    for (i = 1; i <= t; i++) {
        std::cin >> n;

        while (n) {
            if (is_tidy(n)) {
                std::cout << "Case #" << i << ": " << n << std::endl;
                break;
            }

            n = decrease_n(n);
        }
    }

    return 0;
}
