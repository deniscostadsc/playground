#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t t;
    float time, fastest_time;

    while (std::cin >> t) {
        fastest_time = 12.0;

        for (int16_t i = 0; i < t; i++) {
            std::cin >> time;

            if (time < fastest_time) {
                fastest_time = time;
            }
        }

        std::cout << fastest_time << '\n';
    }

    return 0;
}
