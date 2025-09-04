#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t n, selected_door, winners_count = 0;

    std::cin >> n;

    for (int16_t i = 0; i < n; i++) {
        std::cin >> selected_door;
        if (selected_door != 1) {
            winners_count++;
        }
    }

    std::cout << winners_count << '\n';

    return 0;
}
