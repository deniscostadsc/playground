#include <iostream>
#include <cmath>

int main() {
    double a, b, c, d;

    while (std::cin >> a >> b >> c) {
        d = sqrt(12 * 12 + a * a);

        if (12 / b >= d / c) {
            std::cout << "S" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}
