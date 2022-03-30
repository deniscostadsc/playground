#include <cstdint>
#include <iostream>

bool mission_successful(
    std::int32_t power[], std::int32_t weight[], std::int32_t n, std::int32_t k, std::int32_t r) {
    std::int32_t result[n + 1][k + 1];

    for (std::int32_t i = 0; i <= n; i++) {
        for (std::int32_t j = 0; j <= k; j++) {
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
    std::int32_t tests, n, k, resistance;

    std::cin >> tests;

    for (std::int32_t i = 0; i < tests; i++) {
        std::cin >> n;

        std::int32_t power[n];
        std::int32_t weight[n];

        for (std::int32_t j = 0; j < n; j++) {
            std::cin >> power[j] >> weight[j];
        }

        std::cin >> k;
        std::cin >> resistance;

        std::cout
            << (mission_successful(power, weight, n, k, resistance)
                    ? "Missao completada com sucesso"
                    : "Falha na missao")
            << std::endl;
    }
    return 0;
}
