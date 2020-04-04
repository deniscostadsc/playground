#include <iostream>

int main() {
    int test_cases, h, m, o;

    std::cin >> test_cases;

    while (test_cases--) {
        std::cin >> h >> m >> o;
        if (h < 10) {
            std::cout << "0" << h;
        } else {
            std::cout << h;
        }
        std::cout << ":";
        if (m < 10) {
            std::cout << "0" << m;
        } else {
            std::cout << m;
        }
        std::cout << " - A porta ";
        if (o == 1) {
            std::cout << "abriu!";
        } else {
            std::cout << "fechou!";
        }
        std::cout << std::endl;
    }

    return 0;
}
