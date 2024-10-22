#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

std::int16_t find(std::vector< std::int16_t > v, std::int16_t n) {
    for (std::string::size_type i = 0; i < v.size(); i++) {
        if (n == v.at(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::int16_t i, j, n, p, overtakes;
    std::vector< std::int16_t > start;
    std::vector< std::int16_t > finish;

    while (std::cin >> n) {
        start.clear();
        finish.clear();
        overtakes = 0;

        for (i = 0; i < n; i++) {
            std::cin >> p;
            start.push_back(p);
        }

        for (i = 0; i < n; i++) {
            std::cin >> p;
            finish.push_back(p);
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < find(start, finish[i]); j++) {
                if (find(finish, start.at(j)) > i) {
                    overtakes++;
                }
            }
        }
        std::cout << overtakes << std::endl;
    }

    return 0;
}
