#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    std::int16_t q, d, p, answer;

    while (std::cin >> q && q) {
        std::cin >> d >> p;

        answer = trunc(static_cast< double >((q * d) / -(q - p) * p));

        std::cout << answer << " pagina";
        if (answer > 1) {
            std::cout << "s";
        }
        std::cout << std::endl;
    }

    return 0;
}
