#include <cstdint>
#include <cstring>
#include <iostream>

int main() {
    int16_t n, m, c, k, item;
    bool not_first = false;

    std::cin >> n;

    for (int16_t i = 0; i < n; i++) {
        if (not_first) {
            std::cout << std::endl;
        } else {
            not_first = true;
        }
        std::cin >> m >> c;

        int16_t hashs[m][c];

        memset(hashs, 0, sizeof(hashs));

        for (int16_t j = 0; j < c; j++) {
            std::cin >> item;

            k = 0;
            while (hashs[item % m][k]) {
                k++;
            }
            hashs[item % m][k] = item;
        }

        for (int16_t z = 0; z < m; z++) {
            std::cout << z << " -> ";
            for (int16_t y = 0; y < c; y++) {
                if (hashs[z][y] == 0) {
                    break;
                }
                std::cout << hashs[z][y] << " -> ";
            }
            std::cout << "\\" << std::endl;
        }
    }

    return 0;
}
