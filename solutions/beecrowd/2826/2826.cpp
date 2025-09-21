#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string first_word, second_word;
    while (std::cin >> first_word) {
        std::cin >> second_word;

        if (first_word < second_word) {
            std::cout << first_word << '\n';
            std::cout << second_word << '\n';
        } else {
            std::cout << second_word << '\n';
            std::cout << first_word << '\n';
        }
    }

    return 0;
}
