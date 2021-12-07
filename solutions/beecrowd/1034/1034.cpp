#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <limits>

int32_t blocks[26];

int32_t minimum_blocks(int32_t m, int32_t n) {
    int32_t i, j, result[m + 1];

    result[0] = 0;
    for (i = 1; i <= m; i++) {
        result[i] = std::numeric_limits< int32_t >::max();
    }

    for (j = 0; j < n; j++) {
        for (i = blocks[j]; i <= m; i++) {
            result[i] = std::min(result[i], result[i - blocks[j]] + 1);
        }
    }

    return result[m];
}

int main() {
    int32_t i, t, n, m;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        memset(blocks, 0, sizeof(blocks));

        for (i = 0; i < n; i++) {
            std::cin >> blocks[i];
        }

        std::cout << minimum_blocks(m, n) << std::endl;
    }

    return 0;
}
