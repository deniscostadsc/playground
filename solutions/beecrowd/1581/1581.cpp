#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t n, k;
    std::string language, previous_language;
    bool all_languages_equal;

    std::cin >> n;

    while (n--) {
        std::cin >> k;
        std::cin >> previous_language;

        all_languages_equal = true;

        k--;
        while (k--) {
            std::cin >> language;

            if (previous_language != language) {
                all_languages_equal = false;
            }
        }

        std::cout << (all_languages_equal ? language : "ingles") << std::endl;
    }

    return 0;
}
