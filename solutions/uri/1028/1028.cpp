#include <iostream>

int16_t gcd(int16_t a, int16_t b) {
    int16_t x;
    while (b > 0) {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int main() {
    int16_t n, a, b;

    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;
        std::cout << gcd(a, b) << std::endl;
    }

    return 0;
}
