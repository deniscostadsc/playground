#include <iostream>

std::int16_t gcd(std::int16_t a, std::int16_t b) {
    std::int16_t x;
    while (b > 0) {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int main() {
    std::int16_t n, a, b;

    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;
        std::cout << gcd(a, b) << std::endl;
    }

    return 0;
}
