#include <cmath>
#include <cstdint>
#include <iostream>

int32_t max_time_deliveries(
    int32_t time[], int32_t amount[], int32_t n, int32_t p) {
    int32_t result[n + 1][p + 1];

    for (int32_t i = 0; i <= n; i++) {
        for (int32_t j = 0; j <= p; j++) {
            if (i == 0 || j == 0) {
                result[i][j] = 0;
                continue;
            }

            if (amount[i - 1] <= j) {
                result[i][j] = std::max(
                    result[i - 1][j],
                    result[i - 1][j - amount[i - 1]] + time[i - 1]);
            } else {
                result[i][j] = result[i - 1][j];
            }
        }
    }

    return result[n][p];
}

int main() {
    int32_t n, p, amount, time;

    while (std::cin >> n && n != 0) {
        std::cin >> p;

        int32_t time[n];
        int32_t amount[n];

        for (int32_t i = 0; i < n; i++) {
            std::cin >> time[i] >> amount[i];
        }

        std::cout << max_time_deliveries(time, amount, n, p) << " min."
                  << std::endl;
    }

    return 0;
}
