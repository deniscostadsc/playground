#include <iostream>

int main() {
    int n, i;

    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cout << "Ho";
        if (i < n - 1) {
            std::cout << " ";
        }
    }
    std::cout << "!" << std::endl;

    return 0;
}
