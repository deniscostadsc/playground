#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, min_a, max_a, current_a, allowed_guests;

    while (std::cin >> n >> min_a >> max_a) {
        allowed_guests = 0;

        for (int16_t i = 0; i < n; i++) {
            std::cin >> current_a;

            if (current_a >= min_a && current_a <= max_a) {
                allowed_guests++;
            }
        }

        std::cout << allowed_guests << '\n';
    }

    return 0;
}
