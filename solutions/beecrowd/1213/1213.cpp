#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t digits;
    int64_t n, multiple;

    while (std::cin >> n) {
        multiple = 1;
        digits = 1;
        while (multiple % n != 0) {
            multiple = (multiple * 10 + 1) % n;
            digits++;
        }
        std::cout << digits << '\n';
    }

    return 0;
}
