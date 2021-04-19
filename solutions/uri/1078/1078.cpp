#include <iostream>

int main() {
    int n, i;
    std::cin >> n;
    for (i = 1; i <= 10; i++) {
        std::cout << i << " x " << n << " = " << i * n << std::endl;
    }
    return 0;
}
