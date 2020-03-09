#include <iostream>
#include <cstring>

int main() {
    int n, m, c, k, item;
    bool not_first = false;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        if (not_first) {
            std::cout << std::endl;
        } else {
            not_first = true;
        }
        std::cin >> m >> c;

        int hashs[m][c];

        memset(hashs, 0, sizeof(hashs));

        for (int j = 0; j < c; j++) {
            std::cin >> item;

            k = 0;
            while (hashs[item % m][k]) {
                k++;
            }
            hashs[item % m][k] = item;
        }

        for (int z = 0; z < m; z++) {
            std::cout << z << " -> ";
            for (int y = 0; y < c; y++) {
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
