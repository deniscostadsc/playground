#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    std::int16_t a, b, c;

    while (std::cin >> a && a) {
        std::cin >> b >> c;

        double minimun_land_size = (100 * a * b) / c;

        std::cout << floor(sqrt(minimun_land_size)) << std::endl;
    }

    return 0;
}
