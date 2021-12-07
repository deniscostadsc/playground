#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int16_t cents;
    int16_t comma;
    std::string money;

    while (std::cin >> money) {
        std::cin >> cents;

        std::cout << "$";

        comma = money.size() % 3;

        for (size_t i = 0; i < money.size(); i++) {
            if (comma == 0) {
                comma = 3;
                if (i != 0) {
                    std::cout << ",";
                }
            }
            std::cout << money.at(i);
            comma--;
        }

        std::cout << ".";

        if (cents < 10) {
            std::cout << "0" << cents << std::endl;
        } else {
            std::cout << cents << std::endl;
        }
    }

    return 0;
}
