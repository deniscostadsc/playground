#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::int16_t t;
    std::string word;

    std::cin >> t;

    while (t--) {
        std::cin >> word;
        std::cout << std::fixed << std::setprecision(2)
                  << static_cast< float >(word.size()) / 100 << std::endl;
    }

    return 0;
}
