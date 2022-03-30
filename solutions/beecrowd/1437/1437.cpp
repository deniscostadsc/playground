#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t q;
    std::uint16_t i, n;
    std::string c;
    std::string d = "NLSO";

    while (std::cin >> n && n != 0) {
        std::cin >> c;
        q = 0;

        for (i = 0; i < c.size(); i++) {
            if (c.at(i) == 'D') {
                q++;
            } else {
                q--;
            }

            if (q == 4) {
                q = 0;
            }
            if (q == -1) {
                q = 3;
            }
        }

        std::cout << d.at(q) << std::endl;
    }

    return 0;
}
