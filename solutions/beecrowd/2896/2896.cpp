#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t t, n, k;

    std::cin >> t;

    for (int16_t i = 0; i < t; i++) {
        std::cin >> n >> k;
        std::cout << (n / k + n % k) << '\n';
    }

    return 0;
}
