#include <cstdint>
#include <iostream>
#include <map>
#include <string>

std::map< std::string, std::int16_t > alphabet_index;

int main() {
    std::string uppercase_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::map< char, std::int16_t > alphabet_index;
    std::string current_letter;

    for (int16_t i = 0; i < uppercase_alphabet.size(); i++) {
        alphabet_index[uppercase_alphabet[i]] = i + 1;
    }

    while (std::cin >> current_letter) {
        std::cout << alphabet_index[current_letter[0]] << std::endl;
    }

    return 0;
}
