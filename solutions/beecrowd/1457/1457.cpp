#include <cstdint>
#include <cstdio>
#include <iostream>
#include <string>

std::uint16_t n, k;

std::uint64_t oracle(std::uint16_t f) {
    std::int16_t answer = n - (f * k);

    if (answer >= 1) {
        return answer * oracle(f + 1);
    }
    return 1;
}

int main() {
    std::uint16_t c;
    std::string k_str;

    std::cin >> c;

    while (c--) {
        std::cin >> n;
        std::cin >> k_str;
        k = k_str.length();
        std::cout << oracle(0) << std::endl;
    }

    return 0;
}
