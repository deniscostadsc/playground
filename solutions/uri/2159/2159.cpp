#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    int n;

    while (std::cin >> n) {
        std::cout << std::setprecision(1) << std::fixed << n / log(n) << " "
                  << 1.25506 * (n / log(n)) << std::endl;
    }

    return 0;
}
