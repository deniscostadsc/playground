#include <iostream>

int gcd(int a, int b) {
    int x;
    while (b > 0) {
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int main() {
    int n, a, b;

    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;
        std::cout << gcd(a, b) << std::endl;
    }

    return 0;
}
