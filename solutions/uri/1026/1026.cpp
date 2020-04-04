#include <iostream>

int main() {
    unsigned int a, b;

    while (std::cin >> a >> b)
        std::cout << (a ^ b) << std::endl;

    return 0;
}
