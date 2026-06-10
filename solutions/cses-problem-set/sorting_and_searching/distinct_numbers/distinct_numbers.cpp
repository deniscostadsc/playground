#include <cstdint>
#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::set< std::int32_t > distinct_values;

    int32_t n, value;

    std::cin >> n;

    for (int32_t i = 0; i < n; i++) {
        std::cin >> value;
        distinct_values.insert(value);
    }

    std::cout << distinct_values.size() << '\n';

    return 0;
}
