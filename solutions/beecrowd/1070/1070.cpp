#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n;

    while (std::cin >> n) {
        if (n % 2 == 0) {
            n++;
        }
        for (std::int16_t i = 0; i <= 5; i++, n += 2) {
            std::cout << n << std::endl;
        }
    }

    return 0;
}
