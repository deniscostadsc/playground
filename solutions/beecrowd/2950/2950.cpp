#include <iomanip>
#include <iostream>

int main() {
    double distance, palantir_sauron, palantir_saruman;

    while (std::cin >> distance >> palantir_sauron >> palantir_saruman) {
        std::cout << std::fixed << std::setprecision(2)
                  << (distance / (palantir_sauron + palantir_saruman))
                  << std::endl;
    }

    return 0;
}
