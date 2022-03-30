#include <cmath>
#include <iostream>

int main() {
    std::int16_t n, t, q, x1, y1, x2, y2;

    std::cin >> n;
    while (n--) {
        std::cin >> t;
        std::cin >> q;

        while (t--) {
            std::cin >> x1 >> y1 >> x2 >> y2;

            if ((x1 + y1) % 2 == (x2 + y2) % 2) {
                if (x1 == x2 && y1 == y2) {
                    std::cout << "0" << std::endl;
                } else if (std::abs(x1 - x2) == std::abs(y1 - y2)) {
                    std::cout << "1" << std::endl;
                } else {
                    std::cout << "2" << std::endl;
                }
            } else {
                std::cout << "no move" << std::endl;
            }
        }
    }

    return 0;
}
