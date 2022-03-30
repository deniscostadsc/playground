#include <cstdint>
#include <iostream>

int main() {
    std::int16_t n, m, i, j, x, y;

    while (std::cin >> n >> m) {
        std::int16_t terrain[n][m];

        x = 0;
        y = 0;

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                std::cin >> terrain[i][j];
            }
        }

        for (i = 1; i < n - 1; i++) {
            for (j = 1; j < m - 1; j++) {
                if (terrain[i][j] == 42 &&

                    terrain[i - 1][j - 1] == 7 && terrain[i - 1][j] == 7
                    && terrain[i - 1][j + 1] == 7 && terrain[i][j + 1] == 7
                    && terrain[i + 1][j + 1] == 7 && terrain[i + 1][j] == 7
                    && terrain[i + 1][j - 1] == 7 && terrain[i][j - 1] == 7) {
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
            if (x && y) {
                break;
            }
        }

        std::cout << x << " " << y << std::endl;
    }
    return 0;
}
