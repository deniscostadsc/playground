#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t c;

    std::string s;

    while (std::cin >> s) {
        c = 0;

        for (std::uint16_t i = 0; i < s.length(); ++i) {
            if (s.at(i) == ')') {
                c--;
            } else if (s.at(i) == '(') {
                c++;
            }

            if (c < 0) {
                break;
            }
        }

        if (c == 0) {
            std::cout << "correct" << std::endl;
        } else {
            std::cout << "incorrect" << std::endl;
        }
    }

    return 0;
}
