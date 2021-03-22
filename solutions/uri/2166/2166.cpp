#include <iomanip>
#include <iostream>

double sqrtt(int n) {
    if (n == 0) {
        return 2.0;
    }

    return 1 / (1 + sqrtt(n - 1));
}

int main() {
    int n;

    while (std::cin >> n) {
        std::cout << std::fixed << std::setprecision(10) << sqrtt(n) + 1.0
                  << std::endl;
    }

    return 0;
}
