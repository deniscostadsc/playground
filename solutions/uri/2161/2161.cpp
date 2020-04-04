#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double n;
    double result = 6.0;

    while (std::cin >> n) {
        while (n--) {
            result = 6.0 + 1.0 / result;
        }
        std::cout << result << std::endl;
    }

    return 0;
}
