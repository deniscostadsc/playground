#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t n, i, l;
    std::string s;
    std::cin >> n;

    getline(std::cin, s);  // It's a hack

    while (n--) {
        getline(std::cin, s);

        l = s.length();

        for (i = l / 2 - 1; i >= 0; i--) {
            std::cout << s.at(i);
        }
        for (i = l - 1; i > l / 2 - 1; i--) {
            std::cout << s.at(i);
        }

        std::cout << std::endl;
    }

    return 0;
}
