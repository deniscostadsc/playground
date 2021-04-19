#include <iostream>

bool two(int number) {
    return number % 2 == 0 || number != 2;
}

int main() {
    int n;

    std::cin >> n;

    if (two(n)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
