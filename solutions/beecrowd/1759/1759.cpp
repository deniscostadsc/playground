#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, i;

    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cout << "Ho";
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << "!" << std::endl;

    return 0;
}
