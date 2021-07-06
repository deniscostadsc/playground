#include <iostream>
#include <string>

int main() {
    int16_t n;
    std::string s;

    std::cin >> n;
    std::getline(std::cin, s);  // it's a hack

    while (n--) {
        getline(std::cin, s);

        std::string r(s.rbegin(), s.rend());  // reverse string

        uint16_t l = r.length();

        for (uint16_t i = 0; i < s.length(); ++i) {
            if ((r.at(i) >= 65 && r.at(i) <= 90)
                || (r.at(i) >= 97 && r.at(i) <= 122)) {
                r.at(i) = r.at(i) + 3;
            }
            if (i >= l / 2) {
                r.at(i) = r.at(i) - 1;
            }
        }

        std::cout << r << std::endl;
    }

    return 0;
}
