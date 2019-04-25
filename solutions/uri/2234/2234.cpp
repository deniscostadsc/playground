#include <iostream>
#include <iomanip>

int main() {
    float h, p;

    while(std::cin >> h >> p) {
        std::cout << std::fixed;
        std::cout << std::setw(2);
        std::cout << std::setprecision(2);
        std::cout << h / p << std::endl;
    }

    return 0;
}
