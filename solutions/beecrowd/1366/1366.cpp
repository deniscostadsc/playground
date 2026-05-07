#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t n, l, v, total_usable_sticks;

    while (std::cin >> n) {
        if (n == 0) {
            break;
        }

        total_usable_sticks = 0;

        for (int32_t i = 0; i < n; i++) {
            std::cin >> l >> v;
            total_usable_sticks += v;
            if (v % 2 != 0) {
                total_usable_sticks -= 1;
            }
        }

        std::cout << total_usable_sticks / 4 << '\n';
    }

    return 0;
}
