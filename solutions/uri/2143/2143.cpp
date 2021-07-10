#include <iostream>

int main() {
    int16_t t, n;

    while (std::cin >> t && t != 0) {
        for (int16_t i = 0; i < t; i++) {
            std::cin >> n;

            if (n % 2 == 0) {
                std::cout << (n - 2) * 2 + 2 << std::endl;
            } else {
                std::cout << (n - 1) * 2 + 1 << std::endl;
            }
        }
    }

    return 0;
}
