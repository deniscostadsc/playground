#include <iostream>

int main() {
    std::string alphabet;
    int n, letter;

    while (std::cin >> alphabet) {
        std::cin >> n;

        for (int i = 0; i < n; i++) {
            std::cin >> letter;
            std::cout << alphabet[letter - 1];
        }

        std::cout << std::endl;
    }
    return 0;
}
