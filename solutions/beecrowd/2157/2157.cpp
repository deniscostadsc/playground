#include <cstdint>
#include <iostream>

void print_inverted_number(int16_t number) {
    int16_t last_digit;

    while (number) {
        last_digit = number % 10;
        number /= 10;

        std::cout << last_digit;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t c, start, end;

    std::cin >> c;

    for (int16_t i = 0; i < c; i++) {
        std::cin >> start >> end;

        for (int16_t j = start; j <= end; j++) {
            std::cout << j;
        }

        for (int16_t j = end; j >= start; j--) {
            print_inverted_number(j);
        }

        std::cout << '\n';
    }

    return 0;
}
