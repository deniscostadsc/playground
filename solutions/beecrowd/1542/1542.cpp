#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>

int main() {
    double q, d, p, answer;

    while (std::cin >> q && q) {
        std::cin >> d >> p;

        answer = trunc(((d * p) / (p - q)) * q);

        std::cout << answer << " pagina";
        if (answer > 1) {
            std::cout << "s";
        }
        std::cout << std::endl;
    }

    return 0;
}
