#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int32_t m, n, sum, divisor;
    std::string str_sum;

    while (std::cin >> m >> n && m && n) {
        sum = m + n;

        str_sum = std::to_string(sum);

        size_t index = 0;
        while (true) {
            index = str_sum.find("0", index);

            if (index == std::string::npos) {
                break;
            }

            str_sum.replace(index, 1, "");
        }

        std::cout << str_sum << std::endl;
    }
}
