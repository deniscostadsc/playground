#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line, first_term, second_term, result;
    std::vector< std::string > expression;

    while (getline(std::cin, line)) {
        size_t equal_sign = line.find_first_of("=");
        size_t plus_sign = line.find_first_of("+");
        size_t second_term_length = equal_sign - plus_sign - 1;

        first_term = line.substr(0, plus_sign);
        second_term = line.substr(plus_sign + 1, second_term_length);
        result = line.substr(equal_sign + 1);

        if (first_term == "R") {
            std::cout << std::stoi(result) - std::stoi(second_term) << '\n';
        } else if (second_term == "L") {
            std::cout << std::stoi(result) - std::stoi(first_term) << '\n';
        } else {
            std::cout << std::stoi(first_term) + std::stoi(second_term) << '\n';
        }
    }

    return 0;
}
