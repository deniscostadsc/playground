#include <cstdint>
#include <iostream>

bool lower_or_equal_than_others(
    int16_t diameter, int16_t height, int16_t width, int16_t depth) {
    return diameter <= height && diameter <= width && diameter <= depth;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, height, width, depth;

    while (std::cin >> n) {
        std::cin >> height >> width >> depth;

        if (lower_or_equal_than_others(n, height, width, depth)) {
            std::cout << "S" << '\n';
        } else {
            std::cout << "N" << '\n';
        }
    }

    return 0;
}
