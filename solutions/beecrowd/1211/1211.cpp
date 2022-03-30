#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::int32_t n, count, result;
    std::vector< std::string > phone_numbers;
    std::vector< std::string >::iterator it;
    std::string phone_number;
    size_t phone_number_size;

    while (std::cin >> n) {
        result = 0;

        for (std::int32_t i = 0; i < n; i++) {
            std::cin >> phone_number;
            phone_numbers.push_back(phone_number);
        }

        sort(phone_numbers.begin(), phone_numbers.end());

        count = 0;
        phone_number_size = phone_number.size();

        for (it = phone_numbers.begin(); it != phone_numbers.end(); it++) {
            if (count == 0) {
                count++;
                continue;
            }

            for (size_t i = 0; i < phone_number_size; i++) {
                if ((*it)[i] == phone_numbers[count - 1][i]) {
                    result++;
                } else {
                    break;
                }
            }

            count++;
        }

        std::cout << result << std::endl;
        phone_numbers.clear();
    }

    return 0;
}
