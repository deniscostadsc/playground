#include <iostream>

int main() {
    std::int16_t n, s, d, l, g;

    std::cin >> n;
    while (n--) {
        std::cin >> s >> d;
        l = (s - d) / 2;
        g = s - l;

        if (l + g == s && g - l == d && l >= 0 && g >= 0) {
            std::cout << g << " " << l << std::endl;
        } else {
            std::cout << "impossible" << std::endl;
        }
    }

    return 0;
}
