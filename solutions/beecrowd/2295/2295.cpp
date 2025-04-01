#include <iostream>

int main() {
    float a_price, g_price, a_distance, g_distance;
    while (std::cin >> a_price >> g_price >> a_distance >> g_distance) {
        if (a_distance / a_price > g_distance / g_price) {
            std::cout << "A" << std::endl;
        } else {
            std::cout << "G" << std::endl;
        }
    }
    return 0;
}
