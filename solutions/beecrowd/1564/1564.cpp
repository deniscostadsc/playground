#include <cstdint>
#include <iostream>

int main() {
    std::int16_t people;

    while (std::cin >> people) {
        if (people) {
            std::cout << "vai ter duas!" << std::endl;
        } else {
            std::cout << "vai ter copa!" << std::endl;
        }
    }

    return 0;
}
