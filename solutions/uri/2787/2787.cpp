#include <iostream>

int main() {
    int l, c;

    while (std::cin >> l >> c) {
        std::cout << ((l + c) % 2 == 0 ? 1 : 0) << std::endl;
    }

    return 0;
}
