#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>

main() {
    float a, b;
    double c, d;
    std::int16_t a_int, b_int, c_int, d_int;

    while (std::cin >> a >> b) {
        std::cin >> c >> d;

        std::cout << std::fixed << std::setprecision(6);
        std::cout << "A = " << a << ", B = " << b << std::endl;
        std::cout << "C = " << c << ", D = " << d << std::endl;

        std::cout << std::fixed << std::setprecision(1);
        std::cout << "A = " << a << ", B = " << b << std::endl;
        std::cout << "C = " << c << ", D = " << d << std::endl;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "A = " << a << ", B = " << b << std::endl;
        std::cout << "C = " << c << ", D = " << d << std::endl;

        std::cout << std::fixed << std::setprecision(3);
        std::cout << "A = " << a << ", B = " << b << std::endl;
        std::cout << "C = " << c << ", D = " << d << std::endl;

        std::cout << std::scientific << std::setprecision(3)
                  << std::setiosflags(std::ios::uppercase);
        std::cout << "A = " << a << ", B = " << b << std::endl;
        std::cout << "C = " << c << ", D = " << d << std::endl;

        std::cout << std::fixed << std::setprecision(0);
        std::cout << "A = " << a << ", B = " << b << std::endl;
        std::cout << "C = " << c << ", D = " << d << std::endl;
    }

    return 0;
}
