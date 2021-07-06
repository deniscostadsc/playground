#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int16_t n;
    std::string g;

    std::cin >> n;

    while (n--) {
        std::cin >> g;

        if (g.at(0) == g.at(2)) {
            std::cout << (g.at(0) - '0') * (g.at(2) - '0') << std::endl;
        } else if (g.at(1) >= 65 && g.at(1) <= 90) {
            std::cout << (g.at(2) - '0') - (g.at(0) - '0') << std::endl;
        } else {
            std::cout << (g.at(0) - '0') + (g.at(2) - '0') << std::endl;
        }
    }

    return 0;
}
