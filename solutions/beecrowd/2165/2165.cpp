#include <cstdint>
#include <iostream>

int main() {
    char letter;
    std::int16_t count = 0;

    while (std::cin.get(letter)) {
        if (letter != '\n') {
            count++;
        } else {
            if (count <= 140) {
                std::cout << "TWEET" << std::endl;
            } else {
                std::cout << "MUTE" << std::endl;
            }
            count = 0;
        }
    }

    return 0;
}
