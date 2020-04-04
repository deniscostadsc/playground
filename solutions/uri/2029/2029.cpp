#include <cmath>
#include <iomanip>
#include <iostream>

int
    main() {
    double v, d;

    std::cout << std::fixed << std::setprecision(2);

    while (std::cin >> v >> d) {
        std::cout << "ALTURA = " << v / (3.14 * pow((d / 2), 2)) << std::endl;
        std::cout << "AREA = " << 3.14 * pow((d / 2), 2) << std::endl;
    }

    return 0;
}
