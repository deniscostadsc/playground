#include <algorithm>
#include <functional>
#include <iostream>

int main() {
    int n, q, grade, query;

    while (std::cin >> n >> q) {
        int grades[n];

        for (int i = 0; i < n; i++) {
            std::cin >> grade;
            grades[i] = grade;
        }

        std::sort(grades, grades + n, std::greater< int >());

        for (int j = 0; j < q; j++) {
            std::cin >> query;
            std::cout << grades[query - 1] << std::endl;
        }
    }

    return 0;
}
