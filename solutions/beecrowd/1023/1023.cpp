#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>

std::map< std::int16_t, std::int16_t > r;

int main() {
    std::int16_t n, nn = 0, x, y, s, c;
    double xs, ys;
    bool first = true;
    std::map< std::int16_t, std::int16_t >::iterator iter;

    while (std::cin >> n && n != 0) {
        if (!first) {
            std::cout << std::endl;
        }
        first = false;

        xs = 0.0;
        ys = 0.0;
        nn++;

        r.clear();

        while (n--) {
            std::cin >> x >> y;
            ys += y;
            xs += x;

            if (r[y / x] != 0) {
                r[y / x] += x;
            } else {
                r[y / x] = x;
            }
        }

        s = r.size();
        c = 0;

        std::cout << "Cidade# " << nn << ":" << std::endl;

        for (iter = r.begin(); iter != r.end(); iter++) {
            std::cout << iter->second << "-" << iter->first;
            if (c < s - 1) {
                std::cout << " ";
            }
            c++;
        }

        std::cout << std::endl;
        std::cout << "Consumo medio: ";
        std::cout << std::fixed << std::setprecision(2);
        std::cout << floor((ys / xs) * 100) / 100;
        std::cout << " m3." << std::endl;
    }
    return 0;
}
