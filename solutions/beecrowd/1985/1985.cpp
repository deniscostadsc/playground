#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>

int main() {
    std::map< std::int16_t, float > menu;
    menu[1001] = 1.5;
    menu[1002] = 2.5;
    menu[1003] = 3.5;
    menu[1004] = 4.5;
    menu[1005] = 5.5;

    std::int16_t p, q, id = 0;
    float sum = 0.0;

    std::cin >> p;

    while (p--) {
        std::cin >> id >> q;
        sum += menu[id] * q;
    }

    std::cout << std::setprecision(2) << std::fixed << sum << std::endl;

    return 0;
}
