#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main() {
    bool newline = false;
    std::int16_t n;
    std::uint16_t i, g;
    std::string s;
    std::vector< std::string > ss;

    while (std::cin >> n && n != 0) {
        if (newline) {
            std::cout << std::endl;
        } else {
            newline = !newline;
        }

        g = 0;

        while (n--) {
            std::cin >> s;
            if (s.length() > g) {
                g = s.length();
            }
            ss.push_back(s);
        }

        for (i = 0; i < ss.size(); i++) {
            std::cout << std::setw(g);
            std::cout << ss[i] << std::endl;
        }

        ss.clear();
    }

    return 0;
}
