#include <iostream>

int main() {
    int a, b, c;
    bool possible;

    while (std::cin >> a >> b >> c) {
        possible = false;

        if (a - b == 0)
            possible = true;
        if (b - c == 0)
            possible = true;
        if (a - c == 0)
            possible = true;

        if (a + b - c == 0)
            possible = true;
        if (b + c - a == 0)
            possible = true;
        if (c + a - b == 0)
            possible = true;

        if (a - b - c == 0)
            possible = true;
        if (b - c - a == 0)
            possible = true;
        if (c - a - b == 0)
            possible = true;

        std::cout << (possible ? "S" : "N") << std::endl;
    }

    return 0;
}
