#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    std::int16_t a, b, c;
    std::vector< std::int16_t > s;

    while (std::cin >> a >> b >> c && a != 0 && b != 0 && c != 0) {
        s.clear();

        s.push_back(a);
        s.push_back(b);
        s.push_back(c);

        sort(s.begin(), s.end());

        a = s.at(0);
        b = s.at(1);
        c = s.at(2);

        if (sqrt(a * a + b * b) == c) {
            std::cout << "right" << std::endl;
        } else {
            std::cout << "wrong" << std::endl;
        }
    }

    return 0;
}
