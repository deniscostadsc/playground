#include <iostream>

int main() {
    char a, b, c;

    while (std::cin >> a >> b >> c) {
        std::cout << "A = " << a << ", B = " << b << ", C = " << c << std::endl;
        std::cout << "A = " << b << ", B = " << c << ", C = " << a << std::endl;
        std::cout << "A = " << c << ", B = " << a << ", C = " << b << std::endl;
    }

    return 0;
}
