#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t m, n, c;
    float sum_n_c, sum_c;

    while (std::cin >> m) {
        sum_n_c = 0;
        sum_c = 0;

        for (int16_t i = 0; i < m; i++) {
            std::cin >> n >> c;
            sum_n_c += n * c;
            sum_c += c;
        }

        std::cout << std::fixed << std::setprecision(4);
        std::cout << sum_n_c / (sum_c * 100) << '\n';
    }

    return 0;
}
