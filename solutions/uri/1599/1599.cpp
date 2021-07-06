#include <cstdint>
#include <iostream>

int main() {
    int16_t n, m, i, j;
    bool has_peak, has_any_peak;

    while (std::cin >> n >> m) {
        int16_t map[n][m];

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                std::cin >> map[i][j];
            }
        }

        has_any_peak = false;

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                has_peak = true;

                if (i - 1 >= 0 && map[i][j] <= map[i - 1][j]) {
                    has_peak = false;
                }
                if (j - 1 >= 0 && map[i][j] <= map[i][j - 1]) {
                    has_peak = false;
                }
                if (i - 1 >= 0 && j - 1 >= 0
                    && map[i][j] <= map[i - 1][j - 1]) {
                    has_peak = false;
                }

                if (i + 1 < n && map[i][j] <= map[i + 1][j]) {
                    has_peak = false;
                }
                if (j + 1 < m && map[i][j] <= map[i][j + 1]) {
                    has_peak = false;
                }
                if (i + 1 < n && j + 1 < m && map[i][j] <= map[i + 1][j + 1]) {
                    has_peak = false;
                }

                if (i + 1 < n && j - 1 >= 0 && map[i][j] <= map[i + 1][j - 1]) {
                    has_peak = false;
                }
                if (i - 1 >= 0 && j + 1 < m && map[i][j] <= map[i - 1][j + 1]) {
                    has_peak = false;
                }

                if (has_peak) {
                    has_any_peak = true;
                    std::cout << i + 1 << " " << j + 1 << std::endl;
                }
            }
        }

        if (!has_any_peak) {
            std::cout << -1 << std::endl;
        }

        std::cout << std::endl;
    }
    return 0;
}
