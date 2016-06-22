#include <iostream>
#include <string>

int main() {
    unsigned int n, l, c, lines, characters;
    std::string word;

    while (std::cin >> n >> l >> c) {
        lines = 0;
        characters = 0;

        while (n--) {
            std::cin >> word;
            if (characters + word.length() < c) {
                characters += word.length() + 1;
                // if (n == 1) lines++;
            } else {
                characters = word.length() + 1;
                lines++;
            }
        }

        // std::cout << lines << " + + "< std::endl;
        if (lines % l != 0) {
            std::cout << lines / l + 1 << std::endl;
        } else {
            std::cout << lines / l << std::endl;
        }
    }
    return 0;
}
