#include <cstdint>
#include <iostream>

int main() {
    int16_t n;
    while (std::cin >> n) {
        int16_t black_squares = n * n / 2;
        int16_t white_squares = black_squares;

        if (n % 2 != 0) {
            white_squares++;
        }

        std::cout << white_squares << " casas brancas e ";
        std::cout << black_squares << " casas pretas" << std::endl;
    }

    return 0;
}
