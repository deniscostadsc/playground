#include <cmath>
#include <cstdint>
#include <iostream>

bool has_square(int32_t n) {
    int32_t limit = sqrt(n);

    if (n < 0) {
        return false;
    }

    for (int32_t i = 0; i <= limit; i++) {
        for (int32_t j = 0; j <= limit; j++) {
            if (pow(i, 2) + pow(j, 2) == n) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int32_t n;

    while (std::cin >> n) {
        if (has_square(n)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}