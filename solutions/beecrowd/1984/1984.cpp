#include <cstdint>
#include <iostream>
#include <string>

void reverse(std::string n) {
    std::string reversed_n = "";

    for (std::int16_t i = n.length() - 1; i >= 0; i--) {
        std::cout << n[i];
    }

    std::cout << std::endl;
}

int main() {
    std::string n;

    std::cin >> n;
    reverse(n);

    return 0;
}
