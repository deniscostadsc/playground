#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>

int main() {
    std::int16_t lcs;
    std::string a, b;

    while (std::getline(std::cin, a) && std::getline(std::cin, b)) {
        lcs = 0;
        std::int16_t lcs_table[a.size() + 1][b.size() + 1];

        memset(lcs_table, 0, sizeof(lcs_table));

        for (std::int16_t i = 1; i <= static_cast< std::int16_t >(a.size());
             i++) {
            for (std::int16_t j = 1; j <= static_cast< std::int16_t >(b.size());
                 j++) {
                if (a[i - 1] == b[j - 1]) {
                    lcs_table[i][j] = 1 + lcs_table[i - 1][j - 1];
                    lcs = std::max(lcs_table[i][j], lcs);
                }
            }
        }

        std::cout << lcs << std::endl;
    }

    return 0;
}
