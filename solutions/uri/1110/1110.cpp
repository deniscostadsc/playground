#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    uint16_t i, n;

    while (std::cin >> n && n != 0) {
        std::vector< int16_t > l;
        std::vector< int16_t > r;

        for (i = 1; i <= n; i++) {
            l.push_back(i);
        }

        reverse(l.begin(), l.end());

        while (l.size() > 1) {
            r.push_back(l.back());
            l.pop_back();
            l.insert(l.begin(), l.back());
            l.pop_back();
        }

        std::cout << "Discarded cards:";
        for (i = 0; i < r.size(); i++) {
            if (i == 0) {
                std::cout << " ";
            }
            std::cout << r.at(i);
            if (i != r.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;

        std::cout << "Remaining card: ";
        for (i = 0; i < l.size(); i++) {
            std::cout << l.at(i);
        }
        std::cout << std::endl;
    }

    return 0;
}
