#include <iostream>

int main() {
    int n;

    while (std::cin >> n) {
        if (n % 6 == 0) {
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}
