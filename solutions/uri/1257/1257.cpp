#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int16_t n, l, current, sum;
    uint16_t i;
    std::string word, alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    std::cin >> n;

    while (n--) {
        std::cin >> l;
        current = -1;
        sum = 0;

        while (++current < l) {
            std::cin >> word;
            for (i = 0; i < word.size(); i++) {
                sum += alphabet.find_first_of(word.at(i)) + current + i;
            }
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
