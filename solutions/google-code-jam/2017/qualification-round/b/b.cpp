#include <iostream>

unsigned long long decrease_n(unsigned long long n) {
    unsigned long long subtraction_term = 0;

    if (n % 100 == 10) {
        unsigned long long n_copy = n;
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

bool is_tidy(unsigned long long n) {
    if (n <= 9)
        return true;

    int current, previous;

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
    int t, i;
    unsigned long long n;

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
