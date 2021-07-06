#include <iostream>

bool two(int16_t number) {
    return number % 2 == 0 || number != 2;
}

int main() {
    int16_t n;

    std::cin >> n;

    if (two(n)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
