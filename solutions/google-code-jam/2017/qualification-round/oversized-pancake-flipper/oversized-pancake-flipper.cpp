#include <iostream>

int main() {
    std::int16_t t, flipper_capacity;
    std::string pancakes;

    std::cin >> t;

    for (std::int16_t i = 0; i < t; i++) {
        std::cin >> pancakes >> flipper_capacity;
    }

    return 0;
}
