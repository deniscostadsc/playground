#include <cmath>
#include <cstdint>
#include <iostream>

#define pi 3.1415

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    double radius, liters;

    while (std::cin >> radius >> liters) {
        std::cout << static_cast< std::int32_t >(
            3 * liters / (4 * pi * pow(radius, 3)))
                  << '\n';
    }

    return 0;
}
