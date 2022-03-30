#include <cstdint>
#include <iostream>

std::int16_t sum_all_numbers_until(std::int16_t n) {
    return (n * (n + 1)) / 2 + 1;
}

int main() {
    std::int16_t n, x = 0, numbers;

    while (std::cin >> n) {
        numbers = sum_all_numbers_until(n);
        std::cout << "Caso " << ++x << ": ";
        std::cout << numbers;
        std::cout << (numbers == 1 ? " numero" : " numeros") << std::endl;

        std::cout << 0;
        for (std::int16_t i = 1; i <= n; i++) {
            for (std::int16_t j = 1; j <= i; j++) {
                std::cout << " " << i;
            }
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
