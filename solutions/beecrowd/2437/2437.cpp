#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::int16_t x_m, y_m, x_r, y_r;

    while (std::cin >> x_m >> y_m >> x_r >> y_r) {
        std::cout << abs(x_r - x_m) + abs(y_r - y_m) << '\n';
    }

    return 0;
}
