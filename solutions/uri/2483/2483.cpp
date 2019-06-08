#include <iostream>

int main() {
    int a_quantity;

    while (std::cin >> a_quantity) {
        std::cout << "Feliz nat";
        for (int i = 0; i < a_quantity; i++) {
            std::cout << "a";
        }
        std::cout << "l!" << std::endl;
    }

    return 0;
}
