#include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, k;

    while (std::cin >> n >> k) {
        std::string names[n];
        for (int16_t i = 0; i < n; i++) {
            std::cin >> names[i];
        }
        std::sort(names, names + n);

        std::cout << names[k - 1] << '\n';
    }

    return 0;
}
