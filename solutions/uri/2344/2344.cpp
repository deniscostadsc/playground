#include <iostream>

int main() {
    int n;

    while (std::cin >> n) {
        if (n == 0) {
            std::cout << "E";
        } else if (n >= 1 && n <= 35) {
            std::cout << "D";
        } else if (n >= 36 && n <= 60) {
            std::cout << "C";
        } else if (n >= 61 && n <= 85) {
            std::cout << "B";
        } else {
            std::cout << "A";
        }
        std::cout << std::endl;
    }

    return 0;
}
