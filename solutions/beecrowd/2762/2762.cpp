#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string number;
    size_t dot_position;

    while (std::cin >> number) {
        dot_position = number.find('.');

        std::cout << std::stoi(number.substr(dot_position + 1)) << '.'
                  << std::stoi(number.substr(0, dot_position)) << '\n';
    }

    return 0;
}
