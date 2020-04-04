#include <iostream>

int
    main() {
    unsigned long long p;

    while (std::cin >> p && p != -1) {
        if (p == 0) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << p - 1 << std::endl;
        }
    }

    return 0;
}
