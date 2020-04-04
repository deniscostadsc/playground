#include <cmath>
#include <iomanip>
#include <iostream>

double fib(double n) {
    return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5.0);
}

int main() {
    double n;

    while (std::cin >> n) {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << fib(n) << std::endl;
    }

    return 0;
}
