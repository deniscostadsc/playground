#include <cstdint>
#include <iostream>

int main() {
    std::int16_t a, b, s;

    std::cin >> a;
    s = a;
    std::cin >> b;

    while (b <= 0) {
        std::cin >> b;
    }
    for (std::int16_t i = 1; i < b; i++) {
        s += ++a;
    }

    std::cout << s << std::endl;
    return 0;
}
