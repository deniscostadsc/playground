#include <iostream>

int main() {
    int n, la, lb, sa, sb;

    while (std::cin >> n >> la >> lb >> sa >> sb) {
        if (n >= la && n <= lb && n >= sa && n <= sb) {
            std::cout << "possivel";
        } else {
            std::cout << "impossivel";
        }
        std::cout << std::endl;
    }

    return 0;
}
