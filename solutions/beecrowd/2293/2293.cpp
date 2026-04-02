#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t n, m, worm, max_worms, sum_worms_by_row;
    while (std::cin >> n >> m) {
        max_worms = 0;
        std::int32_t sum_worms_by_column[m];
        memset(sum_worms_by_column, 0, sizeof(sum_worms_by_column));

        for (int16_t i = 0; i < n; i++) {
            sum_worms_by_row = 0;
            for (int16_t j = 0; j < m; j++) {
                std::cin >> worm;
                sum_worms_by_column[j] += worm;
                sum_worms_by_row += worm;
            }
            max_worms = std::max(max_worms, sum_worms_by_row);
        }

        for (int16_t i = 0; i < m; i++) {
            max_worms = std::max(max_worms, sum_worms_by_column[i]);
        }

        std::cout << max_worms << '\n';
    }

    return 0;
}
