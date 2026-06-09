#include <cstdint>
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int64_t n, current_number;
    bool first_print;

    while (std::cin >> n) {
        current_number = n;
        first_print = true;

        while (true) {
            if (!first_print) {
                std::cout << " ";
            }

            std::cout << current_number;

            if (current_number == 1) {
                break;
            } else if (current_number % 2 == 0) {
                current_number /= 2;
            } else {
                current_number = current_number * 3 + 1;
            }

            first_print = false;
        }
        std::cout << '\n';
    }

    return 0;
}
