#include <cmath>
#include <iostream>

int
    main() {
    int a, b, c;

    while (std::cin >> a && a) {
        std::cin >> b >> c;

        double minimun_land_size = (100 * a * b) / c;

        std::cout << floor(sqrt(minimun_land_size)) << std::endl;
    }

    return 0;
}
