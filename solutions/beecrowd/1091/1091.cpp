#include <cstdint>
#include <iostream>

int main() {
    int16_t n, x, y, xc, yc;

    while (std::cin >> n && n != 0) {
        std::cin >> x >> y;

        while (n--) {
            std::cin >> xc >> yc;

            if (xc > x && yc > y) {
                std::cout << "NE" << std::endl;
            } else if (xc < x && yc > y) {
                std::cout << "NO" << std::endl;
            } else if (xc < x && yc < y) {
                std::cout << "SO" << std::endl;
            } else if (xc > x && yc < y) {
                std::cout << "SE" << std::endl;
            } else {
                std::cout << "divisa" << std::endl;
            }
        }
    }

    return 0;
}
