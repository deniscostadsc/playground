#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

std::string dec2hex(std::int32_t dec) {
    std::string hex_digits = "0123456789ABCDEF";
    std::int16_t hex_digits_length = hex_digits.length();
    std::string hex = "";

    while (dec) {
        hex = hex_digits[dec % hex_digits_length] + hex;
        dec /= hex_digits_length;
    }

    return hex;
}

int main() {
    std::int32_t v;

    while (std::cin >> v) {
        std::cout << dec2hex(v) << std::endl;
    }

    return 0;
}
