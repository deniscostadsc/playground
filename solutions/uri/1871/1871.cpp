#include <iostream>

int main() {
    long int m, n, sum, divisor;

    while (std::cin >> m >> n && m && n) {
        sum = m + n;

        while (sum) {
            divisor = 1;
            while (divisor <= sum) {
                divisor *= 10;
            }
            divisor /= 10;

            std::cout << sum / divisor;
            sum -= (sum / divisor) * divisor;
        }
        std::cout << std::endl;
    }
}
