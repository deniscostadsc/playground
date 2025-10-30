#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t c, n, m;

    std::cin >> c;
    for (int64_t i = 0; i < c; i++) {
        std::cin >> n >> m;
        std::cout << static_cast< int >(std::floor(m * std::log10(n))) + 1
                  << '\n';
    }

    return 0;
}
