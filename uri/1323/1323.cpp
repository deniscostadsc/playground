#include <iostream>

int main() {
    int n, i, sum;

    while (std::cin >> n && n != 0) {
        sum = 0;

        for (i = 1; i <= n; i++) sum += i * i;

        std::cout << sum << std::endl;
    }

    return 0;
}
