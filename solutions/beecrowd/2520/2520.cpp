#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, m, item, one_x_index, two_x_index, one_y_index, two_y_index;

    while (std::cin >> n >> m) {
        one_x_index, two_x_index, one_y_index, two_y_index = -1, -1, -1, -1;

        for (int16_t y_index = 0; y_index < n; y_index++) {
            for (int16_t x_index = 0; x_index < m; x_index++) {
                std::cin >> item;

                if (item == 1) {
                    one_x_index = x_index;
                    one_y_index = y_index;
                } else if (item == 2) {
                    two_x_index = x_index;
                    two_y_index = y_index;
                }
            }
        }

        std::cout << std::abs(one_x_index - two_x_index)
                + std::abs(one_y_index - two_y_index)
                  << '\n';
    }

    return 0;
}
