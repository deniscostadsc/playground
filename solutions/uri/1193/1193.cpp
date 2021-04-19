#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>

std::string dec2bin(unsigned int n) {
    if (n == 0) {
        return "0";
    }
    if (n == 1) {
        return "1";
    }

    if (n % 2 == 0) {
        return dec2bin(n / 2) + "0";
    }
    return dec2bin(n / 2) + "1";
}

unsigned int bin2dec(std::string b) {
    unsigned int dec = 0, base = 1;
    int index = b.length();

    while (index--) {
        if (b.at(index) == '1') {
            dec += base;
        }
        base *= 2;
    }

    return dec;
}

std::string dec2hex(unsigned int n) {
    std::string chars = "0123456789abcdef";

    unsigned int i = n % 16;

    if (n / 16 > 0) {
        return dec2hex(n / 16) + chars.at(i);
    }

    /* Workaround to concat char and string */
    std::string result = "";
    result += chars.at(i);
    return result;
}

unsigned int hex2dec(std::string h) {
    unsigned int dec = 0, base = 1;
    int index = h.length();
    std::string chars = "0123456789abcdef";

    while (index--) {
        dec += chars.find_first_of(h.at(index)) * base;
        base *= 16;
    }

    return dec;
}

int main() {
    int n, nn;
    std::string number, base;

    std::cin >> n;
    nn = 0;
    while (nn++ < n) {
        std::cin >> number >> base;
        std::cout << "Case " << nn << ":" << std::endl;

        if (base == "bin") {
            std::cout << bin2dec(number) << " dec" << std::endl;
            std::cout << dec2hex(bin2dec(number)) << " hex" << std::endl;
        } else if (base == "dec") {
            std::cout << dec2hex(atoi(number.c_str())) << " hex" << std::endl;
            std::cout << dec2bin(atoi(number.c_str())) << " bin" << std::endl;
        } else {
            std::cout << hex2dec(number) << " dec" << std::endl;
            std::cout << dec2bin(hex2dec(number)) << " bin" << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
