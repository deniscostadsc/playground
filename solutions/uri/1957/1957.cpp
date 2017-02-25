#include <iostream>
#include <cmath>
#include <string>

std::string dec2hex(long dec) {
    std::string hex_digits = "0123456789ABCDEF";
    int hex_digits_length = hex_digits.length();
    std::string hex = "";

    while (dec) {
        hex = hex_digits[dec % hex_digits_length] + hex;
        dec /= hex_digits_length;
    }

    return hex;
}

int main() {
    long v;

    while (std::cin >> v) {
        std::cout << dec2hex(v) << std::endl;
    }

    return 0;
}
