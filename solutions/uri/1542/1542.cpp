#include <cmath>
#include <iostream>

int main() {
    int q, d, p, answer;

    while (std::cin >> q && q) {
        std::cin >> d >> p;

        answer = trunc(static_cast< double >((q * d) / -(q - p) * p));

        std::cout << answer << " pagina";
        if (answer > 1)
            std::cout << "s";
        std::cout << std::endl;
    }

    return 0;
}
