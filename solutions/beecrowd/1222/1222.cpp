#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::uint16_t c, characters;
    std::int16_t n, l, lines;
    std::string word;

    while (std::cin >> n >> l >> c) {
        lines = 1;
        characters = 0;

        while (n--) {
            std::cin >> word;
            if (characters + word.length() <= c) {
                characters += word.length() + 1;
            } else {
                characters = word.length() + 1;
                lines++;
            }
        }

        if (lines % l != 0) {
            std::cout << lines / l + 1 << std::endl;
        } else {
            std::cout << lines / l << std::endl;
        }
    }
    return 0;
}
