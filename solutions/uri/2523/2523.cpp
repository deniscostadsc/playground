#include <cstdint>
#include <iostream>

int main() {
    std::string alphabet;
    int16_t n, letter;

    while (std::cin >> alphabet) {
        std::cin >> n;

        for (int16_t i = 0; i < n; i++) {
            std::cin >> letter;
            std::cout << alphabet[letter - 1];
        }

        std::cout << std::endl;
    }
    return 0;
}
