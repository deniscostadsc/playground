#include <cmath>
#include <iostream>

bool
    is_prime(unsigned long n) {
    if (n == 2)
        return true;
    if (n % 2 == 0 || n < 2)
        return false;

    for (unsigned long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int
    main() {
    int n, p;

    std::cin >> n;

    while (n--) {
        std::cin >> p;

        if (is_prime(p)) {
            std::cout << "Prime" << std::endl;
        } else {
            std::cout << "Not Prime" << std::endl;
        }
    }

    return 0;
}
