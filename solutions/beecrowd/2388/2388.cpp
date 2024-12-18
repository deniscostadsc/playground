#include <iostream>
#include <cstdint>

int main() {
    int32_t distance;
    int16_t n, t, v;

    while (std::cin >> n) {
        distance = 0;
        for (int16_t i = 0; i < n; i++) {
            std::cin >> t >> v;
            distance += t * v;
        }
        std::cout << distance << std::endl;
    }
    return 0;
}
