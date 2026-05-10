#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t c, p, f;

    while (std::cin >> c >> p >> f) {
        std::cout << (c * f <= p ? 'S' : 'N') << '\n';
    }

    return 0;
}
