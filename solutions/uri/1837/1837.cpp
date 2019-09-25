#include <iostream>
#include <cmath>

int main() {
    int a, b;

    while (std::cin >> a >> b) {
        std::cout << floor(float(a) / float(b)) << " " << a % b << std::endl;
    }
    return 0;
}
