#include <algorithm>
#include <cstring>
#include <iostream>

int main() {
    std::int16_t t, n, m, lcs;
    std::string a, b;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;
        std::getline(std::cin, a);  // hack to go to line bellow
        std::getline(std::cin, a);
        std::getline(std::cin, b);

        lcs = 0;

        std::int16_t lcs_table[a.size() + 1][b.size() + 1];

        memset(lcs_table, 0, sizeof(lcs_table));

        for (std::int16_t i = 1; i <= a.size(); i++) {
            for (std::int16_t j = 1; j <= b.size(); j++) {
                if (a[i - 1] == b[j - 1]) {
                    lcs_table[i][j] = lcs_table[i - 1][j - 1] + 1;
                    lcs = std::max(lcs_table[i][j], lcs);
                }
            }
        }

        std::cout << lcs << std::endl;
    }

    return 0;
}
