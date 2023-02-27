#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <limits>

std::int32_t blocks[26];

std::int32_t minimum_blocks(std::int32_t m, std::int32_t n) {
    std::int32_t i, j, result[m + 1];

    result[0] = 0;

    for (j = 0; j < n; j++) {
        for (i = blocks[j]; i <= m; i++) {
            if (j == 0) {
                result[i] = std::numeric_limits< std::int32_t >::max();
            }
            if (blocks[j] <= i) {
                result[i] = std::min(result[i], result[i - blocks[j]] + 1);
            }
        }
    }

    return result[m];
}

int main() {
    std::int32_t i, t, n, m;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        for (i = 0; i < n; i++) {
            std::cin >> blocks[i];
        }

        std::cout << minimum_blocks(m, n) << std::endl;
    }

    return 0;
}
