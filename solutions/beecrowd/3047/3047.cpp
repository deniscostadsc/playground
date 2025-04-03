#include <algorithm>
#include <iostream>

int main() {
    std::int16_t monica_age, first_son, second_son, monica_minus_children;

    while (std::cin >> monica_age) {
        std::cin >> first_son;
        std::cin >> second_son;
        monica_minus_children = monica_age - first_son - second_son;

        std::cout << std::max({first_son, second_son, monica_minus_children})
                  << std::endl;
    }

    return 0;
}
