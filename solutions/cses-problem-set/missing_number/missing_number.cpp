#include <cstdint>
#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::set< std::int32_t > numbers;

    int32_t n, number;

    while (std::cin >> n) {
        for (int32_t i = 1; i <= n - 1; i++) {
            std::cin >> number;
            numbers.insert(number);
        }

        for (int32_t i = 1; i <= n; i++) {
            if (numbers.contains(i)) {
                continue;
            }
            std::cout << i << '\n';
            break;
        }

        numbers.clear();
    }

    return 0;
}
