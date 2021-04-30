#include <iostream>

int main() {
    int c, energy;

    std::cin >> c;

    for (int i = 0; i < c; i++) {
        std::cin >> energy;

        if (energy > 8000) {
            std::cout << "Mais de 8000!";
        } else {
            std::cout << "Inseto!";
        }

        std::cout << std::endl;
    }

    return 0;
}
