#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    double n, x;

    while (std::cin >> n >> x) {
        std::cout << std::fixed << std::setprecision(2) << x / (n + 2) << '\n';
    }

    return 0;
}
