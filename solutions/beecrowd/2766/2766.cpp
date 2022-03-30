#include <cstdint>
#include <iostream>

int main() {
    std::string name;

    while (std::cin >> name) {
        for (std::int8_t i = 1; i < 10; i++) {
            std::cin >> name;

            if (i == 2 || i == 6 || i == 8) {
                std::cout << name << std::endl;
            }
        }
    }

    return 0;
}
