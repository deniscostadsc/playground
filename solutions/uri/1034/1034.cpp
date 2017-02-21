#include <algorithm>
#include <cstring>
#include <iostream>

int blocks[26];
int memo[1000001];

int minimum_blocks(int m, int n) {
    if (memo[m]) return memo[m];

    int i;

    for (i = 0; i < n; i++) {
        if (blocks[i] == m) {
            memo[m] = 1;
            return memo[m];
        }
    }

    int min_solution = m;

    for (i = 0; i < n; i++) {
        if (blocks[i] > m) break;
        min_solution = std::min(
            min_solution, minimum_blocks(m - blocks[i], n));
    }

    memo[m] = 1 + min_solution;
    return memo[m];
}

int main() {
    int i, t, n, m;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        memset(blocks, 0, sizeof(blocks));
        memset(memo, 0, sizeof(memo));

        for (i = 0; i < n; i++) std::cin >> blocks[i];

        std::sort(blocks, blocks + n);
        std::cout << minimum_blocks(m, n) << std::endl;
    }

    return 0;
}
