#include <cstdint>
#include <cstdio>
#include <iostream>
#include <map>

int main() {
    int16_t n, completeness;
    std::string phrase, alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::map< char, int16_t > letter_count;

    std::cin >> n;
    getchar();

    while (n--) {
        for (int16_t i = 0; i < static_cast< int16_t >(alphabet.length());
             i++) {
            letter_count[alphabet[i]] = 0;
        }

        std::getline(std::cin, phrase);

        for (int16_t j = 0; j < static_cast< int16_t >(phrase.length()); j++) {
            letter_count[phrase[j]]++;
        }

        completeness = 0;
        for (int16_t z = 0; z < static_cast< int16_t >(alphabet.length());
             z++) {
            if (letter_count[alphabet[z]] != 0) {
                completeness++;
            }
        }

        if (completeness == 26) {
            std::cout << "frase completa" << std::endl;
        } else if (completeness >= 13) {
            std::cout << "frase quase completa" << std::endl;
        } else {
            std::cout << "frase mal elaborada" << std::endl;
        }
    }

    return 0;
}
