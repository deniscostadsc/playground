#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <string>

std::string dec2hex(std::uint32_t n) {
    std::string chars = "0123456789ABCDEF";

    std::uint32_t i = n % 16;

    if (n / 16 > 0) {
        return dec2hex(n / 16) + chars.at(i);
    }

    /* Workaround to concat char and string */
    std::string result = "";
    result += chars.at(i);
    return result;
}

std::uint32_t hex2dec(std::string h) {
    std::uint32_t dec = 0, base = 1;
    std::int32_t index = h.length();
    std::string chars = "0123456789abcdef";

    while (index--) {
        dec += chars.find_first_of(h.at(index)) * base;
        base *= 16;
    }

    return dec;
}

int main() {
    std::string n;

    while (std::cin >> n && n != "-1") {
        if (n.size() >= 2 && n.at(1) == 'x') {
            transform(n.begin(), n.end(), n.begin(), ::tolower);
            std::cout << hex2dec(n.substr(2)) << std::endl;
        } else {
            std::cout << "0x" << dec2hex(atoi(n.c_str())) << std::endl;
        }
    }

    return 0;
}
