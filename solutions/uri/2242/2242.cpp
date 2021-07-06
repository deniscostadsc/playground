#include <cstdint>
#include <iostream>

bool is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    std::string laugh;
    std::string laugh_vowels;
    bool is_funniest;

    while (std::cin >> laugh) {
        laugh_vowels = "";
        is_funniest = true;

        for (int16_t i = 0; i < static_cast< int16_t >(laugh.size()); i++) {
            if (is_vowel(laugh[i])) {
                laugh_vowels += laugh[i];
            }
        }

        for (int16_t i = 0; i < static_cast< int16_t >(laugh_vowels.size()) / 2;
             i++) {
            if (laugh_vowels[i]
                != laugh_vowels
                       [static_cast< int16_t >(laugh_vowels.size()) - 1 - i]) {
                is_funniest = false;
            }
        }

        std::cout << (is_funniest ? "S" : "N") << std::endl;
    }

    return 0;
}
