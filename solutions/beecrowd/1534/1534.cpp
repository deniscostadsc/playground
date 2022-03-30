#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, i, j;

    while (std::cin >> n) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == j && i + j == n - 1) {
                    std::cout << "2";
                } else if (i == j) {
                    std::cout << "1";
                } else if (i + j == n - 1) {
                    std::cout << "2";
                } else {
                    std::cout << "3";
                }
            }

            std::cout << std::endl;
        }
    }

    return 0;
}
