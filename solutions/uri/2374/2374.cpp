#include <cstdint>
#include <iostream>

int main() {
    int16_t n, m;

    while (std::cin >> n >> m) {
        std::cout << n - m << std::endl;
    }

    return 0;
}
