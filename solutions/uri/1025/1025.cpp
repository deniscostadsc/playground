#include <algorithm>
#include <iostream>
#include <vector>

int16_t bi_search(std::vector< int16_t > v, int16_t n) {
    int16_t begin = 0;
    int16_t end = v.size() - 1;
    int16_t middle = end / 2;

    while (begin < end) {
        if (v.at(middle) < n) {
            begin = middle + 1;
            middle = (end + begin) / 2;
        } else if (v.at(middle) > n || (middle > 0 && v.at(middle - 1) == n)) {
            end = middle - 1;
            middle = (end + begin) / 2;
        } else {
            return middle + 1;
        }
    }

    if (v.at(middle) == n) {
        return middle + 1;
    }
    return -1;
}

int main() {
    int16_t n, q, marble, query, position, c = 0;
    std::vector< int16_t > marbles;

    while (std::cin >> n >> q && n && q) {
        marbles.clear();

        while (n--) {
            std::cin >> marble;
            marbles.push_back(marble);
        }

        sort(marbles.begin(), marbles.end());

        std::cout << "CASE# " << ++c << ":" << std::endl;

        while (q--) {
            std::cin >> query;
            position = bi_search(marbles, query);
            if (position == -1) {
                std::cout << query << " not found" << std::endl;
            } else {
                std::cout << query << " found at " << position << std::endl;
            }
        }
    }
    return 0;
}
