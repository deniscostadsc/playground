#include <cmath>
#include <iostream>
#include <string>

std::string conversor(
    std::string alien_number,
    std::string source_language,
    std::string target_language) {
    int16_t number_value = 0, current_digit_index, i;
    int16_t source_language_size = source_language.length();
    int16_t target_language_size = target_language.length();
    std::string target_number = "";

    for (i = 0; i < static_cast< int16_t >(alien_number.length()); i++) {
        current_digit_index
            = source_language.find(alien_number[alien_number.length() - i - 1]);
        number_value += current_digit_index * pow(source_language_size, i);
    }

    while (number_value) {
        target_number = target_language[number_value % target_language_size]
            + target_number;
        number_value /= target_language_size;
    }

    return target_number;
}

int main() {
    int16_t n, i;
    std::string alien_number, source_language, target_language;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> alien_number >> source_language >> target_language;
        std::cout << "Case #" << i << ": ";
        std::cout << conversor(alien_number, source_language, target_language);
        std::cout << std::endl;
    }

    return 0;
}
