#include <cstdint>
#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t t, n, sheep;
    std::set< int32_t > unique_sheeps;

    std::cin >> t;

    for (int32_t i = 0; i < t; i++) {
        std::cin >> n;

        for (int32_t j = 0; j < n; j++) {
            std::cin >> sheep;
            unique_sheeps.insert(sheep);
        }

        std::cout << unique_sheeps.size() << '\n';

        unique_sheeps.clear();
    }

    return 0;
}
