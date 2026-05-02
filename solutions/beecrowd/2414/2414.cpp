#include <algorithm>
#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line;
    int16_t number, greatest_number;

    while (getline(std::cin, line)) {
        std::stringstream s_line(line);

        greatest_number = -1;

        while (s_line >> number) {
            greatest_number = std::max(greatest_number, number);
        }

        std::cout << greatest_number << '\n';
    }

    return 0;
}
