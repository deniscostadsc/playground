#include <iostream>

int main() {
    int t, x, i, c = 0;

    std::cin >> t;

    for (i = 0; i <= 4; i++) {
        std::cin >> x;
        if (x == t) {
            c++;
        }
    }

    std::cout << c << std::endl;
    return 0;
}
