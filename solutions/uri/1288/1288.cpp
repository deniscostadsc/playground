#include <iostream>

bool mission_successful(int power[], int weight[], int n, int k, int r) {
    int result[n + 1][k + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (i == 0 || j == 0) {
                result[i][j] = 0;
                continue;
            }

            if (weight[i - 1] <= j) {
                result[i][j] = std::max(
                    result[i - 1][j],
                    result[i - 1][j - weight[i - 1]] + power[i - 1]);
            } else {
                result[i][j] = result[i - 1][j];
            }
        }
    }

    return result[n][k] >= r;
}

int main() {
    int tests, n, k, resistance;

    std::cin >> tests;

    for (int i = 0; i < tests; i++) {
        std::cin >> n;

        int power[n];
        int weight[n];

        for (int j = 0; j < n; j++) {
            std::cin >> power[j] >> weight[j];
        }

        std::cin >> k;
        std::cin >> resistance;

        std::cout << (mission_successful(power, weight, n, k, resistance)
                          ? "Missao completada com sucesso"
                          : "Falha na missao")
                  << std::endl;
    }
    return 0;
}
