#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n;
    double t, d, previous_record;

    while (std::cin >> n) {
        previous_record = 0.0;

        for (int16_t day = 1; day <= n; day++) {
            std::cin >> t >> d;

            if (d / t > previous_record) {
                previous_record = d / t;
                std::cout << day << '\n';
            }
        }
    }

    return 0;
}
