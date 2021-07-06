#include <cstdint>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int16_t n, l;
    double c, g, avg;
    std::vector< double > gs;

    std::cin >> n;
    while (n--) {
        gs.clear();
        c = 0.0;
        avg = 0;
        std::cin >> l;

        for (int16_t i = 0; i < l; ++i) {
            std::cin >> g;
            gs.push_back(g);
        }

        avg += accumulate(gs.begin(), gs.end(), 0) / gs.size();

        for (int16_t i = 0; i < l; ++i) {
            if (gs.at(i) > avg) {
                c++;
            }
        }

        printf("%.3f%\n", c / gs.size() * 100);
    }
    return 0;
}
