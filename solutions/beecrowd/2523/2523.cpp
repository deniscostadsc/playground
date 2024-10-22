#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::string alphabet;
    std::int16_t n, letter;

    while (std::cin >> alphabet) {
        std::cin >> n;

        for (std::int16_t i = 0; i < n; i++) {
            std::cin >> letter;
            std::cout << alphabet[letter - 1];
        }

        std::cout << std::endl;
    }
    return 0;
}
