#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    float r;

    while (std::cin >> r) {
        std::cout << std::fixed << std::setprecision(2) << r * 2 * 3.14 << '\n';
    }

    return 0;
}
