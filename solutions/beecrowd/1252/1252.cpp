#include <cstdint>
#include <iostream>
#include <algorithm>
#include <vector>

int32_t m;

bool comparator(int32_t number1, int32_t number2) {
    if (number1 % m != number2 % m) {
        return (number1 % m) < (number2 % m);
    }

    if (number1 % 2 != 0 && number2 % 2 == 0) {
        return true;
    }

    if (number1 % 2 == 0 && number2 % 2 != 0) {
        return false;
    }

    if (number1 % 2 == 0 && number2 % 2 == 0) {
        return number1 < number2;
    }

    if (number1 % 2 != 0 && number2 % 2 != 0) {
        return number1 > number2;
    }
}

int main() {
    int32_t n, number;
    std::vector< std::int16_t > numbers;

    while (std::cin >> n >> m && n && m) {
        std::cout << n << " " << m << std::endl;

        for (int16_t i = 0; i < n; i++) {
            std::cin >> number;
            numbers.push_back(number);
        }

        std::sort(numbers.begin(), numbers.end(), comparator);

        for (int16_t i = 0; i < n; i++) {
            std::cout << numbers[i] << std::endl;
        }

        numbers.clear();
    }

    std::cout << "0 0" << std::endl;

    return 0;
}
