#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t n;
    std::string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    while (std::cin >> n) {
        std::cout << quote.substr(0, n) << std::endl;
    }
    return 0;
}
