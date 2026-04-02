#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string word;

    while (std::cin >> word) {
        for (std::int16_t i = 0; i < word.length(); i++) {
            for (std::int16_t j = 0; j < i; j++) {
                std::cout << " ";
            }

            for (std::int16_t j = 0; j < word.length() - i; j++) {
                if (j != 0) {
                    std::cout << " ";
                }
                std::cout << word[j];
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }

    return 0;
}
