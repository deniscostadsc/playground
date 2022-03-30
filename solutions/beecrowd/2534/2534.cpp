#include <algorithm>
#include <cstdint>
#include <functional>
#include <iostream>

int main() {
    std::int16_t n, q, grade, query;

    while (std::cin >> n >> q) {
        std::int16_t grades[n];

        for (std::int16_t i = 0; i < n; i++) {
            std::cin >> grade;
            grades[i] = grade;
        }

        std::sort(grades, grades + n, std::greater< std::int16_t >());

        for (std::int16_t j = 0; j < q; j++) {
            std::cin >> query;
            std::cout << grades[query - 1] << std::endl;
        }
    }

    return 0;
}
