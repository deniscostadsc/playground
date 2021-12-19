#include <cstdint>
#include <iostream>

int main() {
    int16_t n, l, c, total_broken_glasses = 0;

    std::cin >> n;

    for (int16_t i = 0; i < n; i++) {
        std::cin >> l >> c;

        if (l > c) {
            total_broken_glasses += c;
        }
    }

    std::cout << total_broken_glasses << std::endl;

    return 0;
}
