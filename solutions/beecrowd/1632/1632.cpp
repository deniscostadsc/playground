#include <cstdint>
#include <iostream>
#include <set>
#include <string>

int main() {
    int16_t t;
    int32_t variations;
    std::string line;
    std::set< char > letters_with_three_options
        = {'a', 'e', 'i', 'o', 's', 'A', 'E', 'I', 'O', 'S'};

    std::cin >> t;
    for (int16_t i = 0; i < t; i++) {
        std::cin >> line;
        variations = 1;

        for (char &letter : line) {
            if (letters_with_three_options.contains(letter)) {
                variations *= 3;
            } else {
                variations *= 2;
            }
        }

        std::cout << variations << std::endl;
    }

    return 0;
}
