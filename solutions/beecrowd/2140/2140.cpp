#include <cstdint>
#include <cstring>
#include <iostream>

int main() {
    std::int16_t n, m;
    std::int16_t bills[] = {2, 5, 10, 20, 50, 100};
    std::int16_t possible_changes[201];

    memset(possible_changes, 0, sizeof(possible_changes));

    for (std::int16_t i = 0; i <= 5; i++) {
        for (std::int16_t j = 0; j <= 5; j++) {
            possible_changes[bills[i] + bills[j]] = bills[i] + bills[j];
        }
    }

    while (std::cin >> n >> m && n && m) {
        if (m - n <= 200 && possible_changes[m - n]) {
            std::cout << "possible" << std::endl;
        } else {
            std::cout << "impossible" << std::endl;
        }
    }

    return 0;
}
