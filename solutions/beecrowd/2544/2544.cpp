#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t n;

    while (std::cin >> n) {
        std::cout << static_cast< std::int32_t >(log2(n)) << '\n';
    }

    return 0;
}
