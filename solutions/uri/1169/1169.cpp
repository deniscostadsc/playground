#include <cstdint>
#include <cstring>
#include <iostream>

uint64_t grains(uint64_t n) {
    if (n == 1) {
        return 2;
    }
    return 2 * grains(n - 1);
}

int main() {
    int16_t n;
    uint64_t x;

    std::cin >> n;
    while (n--) {
        std::cin >> x;

        if (x == 64) {
            std::cout << "1537228672809129 kg" << std::endl;
        } else {
            std::cout << grains(x) / 12 / 1000 << " kg" << std::endl;
        }
    }
    return 0;
}
