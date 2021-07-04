#include <iostream>

int max_time_deliveries(int time[], int amount[], int n, int p) {
    int result[n + 1][p + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= p; j++) {
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
    int n, p, amount, time;

    while (std::cin >> n && n != 0) {
        std::cin >> p;

        int time[n];
        int amount[n];

        for (int i = 0; i < n; i++) {
            std::cin >> time[i] >> amount[i];
        }

        std::cout << max_time_deliveries(time, amount, n, p) << " min."
                  << std::endl;
    }

    return 0;
}
