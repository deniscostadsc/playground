#include <cstdio>
#include <iostream>
#include <map>

int main() {
    int n, completeness;
    std::string phrase, alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::map< char, int > letter_count;

    std::cin >> n;
    getchar();

    while (n--) {
        for (int i = 0; i < static_cast< int >(alphabet.length()); i++) {
            letter_count[alphabet[i]] = 0;
        }

        std::getline(std::cin, phrase);

        for (int j = 0; j < static_cast< int >(phrase.length()); j++) {
            letter_count[phrase[j]]++;
        }

        completeness = 0;
        for (int z = 0; z < static_cast< int >(alphabet.length()); z++) {
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
