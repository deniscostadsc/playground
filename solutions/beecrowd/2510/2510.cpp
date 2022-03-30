#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n;
    std::string name;

    std::cin >> n;

    for (std::int16_t i = 0; i < n; i++) {
        std::cout << "Y" << std::endl;
    }

    return 0;
}
