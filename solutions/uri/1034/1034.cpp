#include <algorithm>
#include <iostream>
#include <map>
#include <set>

std::set<int> blocks;
std::map<int, int> memo;

int minimum_blocks(int m) {
    if (memo[m]) return memo[m];

    std::set<int>::iterator it;

    for (it = blocks.begin(); it != blocks.end(); it++) {
        if (*it == m) {
            memo[m] = 1;
            return memo[m];
        }
    }

    int min_solution = m;
    for (it = blocks.begin(); it != blocks.end(); it++) {
        if (*it > m) break;
        min_solution = std::min(min_solution, minimum_blocks(m - *it));
    }
    memo[m] = 1 + min_solution;
    return memo[m];
}

int main() {
    int t, n, m, block;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        while (n--) {
            std::cin >> block;
            blocks.insert(block);
        }

        std::cout << minimum_blocks(m) << std::endl;

        blocks.clear();
        memo.clear();
    }

    return 0;
}
