#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>

int
    main() {
    int n, c;
    double p, prices, k, kilos = 0;
    std::string s;

    std::cin >> n;

    c = 0;

    while (++c <= n) {
        std::cin >> p;
        prices += p;

        getline(std::cin, s);  // it's hack!!!
        getline(std::cin, s);

        k = count(s.begin(), s.end(), ' ') + 1;

        std::cout << "day " << c << ": " << k << " kg" << std::endl;

        kilos += k;
    }

    printf("%.2F kg by day\n", kilos / n);
    printf("R$ %.2F by day\n", prices / n);

    return 0;
}
