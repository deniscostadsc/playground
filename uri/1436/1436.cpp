#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int c, n, l, j;
    std::vector<int> p;

    std::cin >> n;
    c = 0;

    while (++c <= n) {
        p.clear();
        std::cin >> l;

        while (l--) {
            std::cin >> j;
            p.push_back(j);
        }

        sort(p.begin(), p.end());
        std::cout << "Case " << c << ": " << p.at(p.size() / 2) << std::endl;
    }

    return 0;
}
