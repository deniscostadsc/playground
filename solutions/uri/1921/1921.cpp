#include <iostream>

int
    main() {
    unsigned long long n;

    while (std::cin >> n) {
        std::cout << (n * (n - 1) / 2) - n << std::endl;
    }

    return 0;
}
