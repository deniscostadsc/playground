#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, i;

    std::cin >> n;

    for (i = 1; i <= n; i += 2) {
        std::cout << i << std::endl;
    }

    return 0;
}
