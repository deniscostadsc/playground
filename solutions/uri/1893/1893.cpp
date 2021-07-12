#include <iostream>

int main() {
    int16_t first_night, second_night;

    while (std::cin >> first_night >> second_night) {
        if (second_night <= 2) {
            std::cout << "nova" << std::endl;
        } else if (second_night >= 97) {
            std::cout << "cheia" << std::endl;
        } else if (first_night >= second_night) {
            std::cout << "minguante" << std::endl;
        } else {
            std::cout << "crescente" << std::endl;
        }
    }

    return 0;
}
