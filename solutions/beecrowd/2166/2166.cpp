#include <cstdint>
#include <iomanip>
#include <iostream>

double sqrtt(std::int16_t n) {
    double result = 1 / 2;

    for (std::int16_t i = 0; i < n; i++) {
        result = 1 / (2 + result);
    }

    return result + 1;
}

int main() {
    std::int16_t n;

    while (std::cin >> n) {
        std::cout << std::fixed << std::setprecision(10) << sqrtt(n)
                  << std::endl;
    }

    return 0;
}
