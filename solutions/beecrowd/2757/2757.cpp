#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t a, b, c;

    while (std::cin >> a) {
        std::cin >> b;
        std::cin >> c;

        std::cout << "A = " << a << ", B = " << b << ", C = " << c << "\n";
        std::cout << "A = " << std::right << std::setw(10) << a
                  << ", B = " << std::setw(10) << b << ", C = " << std::setw(10)
                  << c << "\n";
        std::cout << "A = " << std::setfill('0') << std::internal
                  << std::setw(10) << a << ", B = " << std::setw(10) << b
                  << ", C = " << std::setw(10) << c << "\n";
        std::cout << "A = " << std::setfill(' ') << std::left << std::setw(10)
                  << a << ", B = " << std::setw(10) << b
                  << ", C = " << std::setw(10) << c << "\n";
    }

    return 0;
}
