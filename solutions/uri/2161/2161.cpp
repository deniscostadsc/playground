#include <cstdint>
#include <iomanip>
#include <iostream>

double sqrtt(int16_t n) {
    double result = 0.0;

    for (int16_t i = 0; i < n; i++) {
        result = 1 / (6 + result);
    }

    return result + 3;
}

int main() {
    int16_t n;

    while (std::cin >> n) {
        std::cout << std::fixed << std::setprecision(10) << sqrtt(n)
                  << std::endl;
    }

    return 0;
}
