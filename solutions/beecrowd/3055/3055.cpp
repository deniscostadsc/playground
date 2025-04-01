#include <iostream>

int main () {
    int16_t grade, average;

    while (std::cin >> grade) {
        std::cin >> average;

        std::cout << average * 2 - grade << std::endl;
    }

    return 0;
}
