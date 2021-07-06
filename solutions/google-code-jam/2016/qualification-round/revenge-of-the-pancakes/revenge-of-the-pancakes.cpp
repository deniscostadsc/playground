#include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int16_t t, count, limit;
    uint16_t j;
    bool minus_found;
    std::string s;

    std::cin >> t;

    for (int16_t i = 1; i <= t; i++) {
        std::cin >> s;
        count = 0;

        do {
            limit = 0;
            minus_found = false;

            for (int16_t j = 0; j < s.length(); j++) {
                if (s.at(j) == '-') {
                    minus_found = true;
                }
                if (minus_found && s.at(j) == '+') {
                    break;
                }
                limit++;
            }

            if (minus_found) {
                count++;
                std::replace(s.begin(), s.begin() + limit, '+', '*');
                std::replace(s.begin(), s.begin() + limit, '-', '+');
                std::replace(s.begin(), s.begin() + limit, '*', '-');
            }
        } while (minus_found);

        std::cout << "Case #" << i << ": " << count << std::endl;
    }

    return 0;
}
