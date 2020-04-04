#include <iostream>

int main() {
    int n, i, j;

    while (std::cin >> n) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (n % 2 == 1 && i == n / 2 && j == n / 2) {
                    std::cout << 4;
                } else if (
                    (i >= n / 3 && i < n - (n / 3))
                    && (j >= n / 3 && j < n - (n / 3))) {
                    std::cout << 1;
                } else if (i == j) {
                    std::cout << 2;
                } else if (i + j == n - 1) {
                    std::cout << 3;
                } else {
                    std::cout << 0;
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
