#include <algorithm>
#include <cstdint>
#include <functional>
#include <iostream>

int main() {
    int16_t n, q, grade, query;

    while (std::cin >> n >> q) {
        int16_t grades[n];

        for (int16_t i = 0; i < n; i++) {
            std::cin >> grade;
            grades[i] = grade;
        }

        std::sort(grades, grades + n, std::greater< int16_t >());

        for (int16_t j = 0; j < q; j++) {
            std::cin >> query;
            std::cout << grades[query - 1] << std::endl;
        }
    }

    return 0;
}
