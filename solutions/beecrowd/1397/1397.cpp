#include <cstdint>
#include <iostream>

int main() {
    int16_t n, a, b, ac, bc;

    while (std::cin >> n && n != 0) {
        ac = 0;
        bc = 0;

        while (n--) {
            std::cin >> a >> b;

            if (a > b) {
                ac++;
            }
            if (b > a) {
                bc++;
            }
        }

        std::cout << ac << " " << bc << std::endl;
    }

    return 0;
}
