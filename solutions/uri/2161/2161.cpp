#include <iomanip>
#include <iostream>

double sqrtt(int n) {
    double result = 1 / 6;

    for (int i = 0; i < n; i++) {
        result = 1 / (6 + result);
    }

    return result + 3;
}

int main() {
    int n;

    while (std::cin >> n) {
        std::cout << std::fixed << std::setprecision(10) << sqrtt(n)
                  << std::endl;
    }

    return 0;
}
