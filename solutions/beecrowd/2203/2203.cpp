#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    int16_t xf, yf, xi, yi, vi, r1, r2;
    double distance;

    while (std::cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2) {
        distance = sqrt(pow(xi - xf, 2) + pow(yi - yf, 2)) + 1.5 * vi;

        if (distance <= r1 + r2) {
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}
