#include <algorithm>
#include <cstdint>
#include <iostream>
#include <limits>

int main() {
    int32_t n, s, lowest_balance, current_balance, activity;
    int32_t infinity = 2 << 25;

    while (std::cin >> n >> s) {
        lowest_balance = infinity;
        current_balance = s;
        for (int16_t i = 0; i < n; i++) {
            std::cin >> activity;
            current_balance += activity;
            lowest_balance = std::min(lowest_balance, current_balance);
        }
        std::cout << lowest_balance << std::endl;
    }

    return 0;
}
