#include <iostream>

int rafael(int x, int y) {
    return ((3 * x) * (3 * x)) + (y * y);
}

int beto(int x, int y) {
    return 2 * (x * x) + ((5 * y) * (5 * y));
}

int carlos(int x, int y) {
    return -100 * x + (y * y * y);
}

int main() {
    int n, x, y;

    std::cin >> n;

    while (n--) {
        std::cin >> x >> y;
        if (rafael(x, y) > beto(x, y) && rafael(x, y) > carlos(x, y)) {
            std::cout << "Rafael ganhou" << std::endl;
        } else if (beto(x, y) > carlos(x, y)) {
            std::cout << "Beto ganhou" << std::endl;
        } else {
            std::cout << "Carlos ganhou" << std::endl;
        }
    }

    return 0;
}
