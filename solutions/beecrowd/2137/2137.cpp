#include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::int16_t n;
    std::string code;
    std::vector< std::string > codes;
    std::vector< std::string >::iterator it;

    while (std::cin >> n) {
        while (n--) {
            std::cin >> code;
            codes.push_back(code);
        }
        std::sort(codes.begin(), codes.end());

        for (it = codes.begin(); it != codes.end(); it++) {
            std::cout << *it << std::endl;
        }
        codes.clear();
    }

    return 0;
}
