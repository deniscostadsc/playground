#include <iostream>
#include <string>

std::string get_first_five_digits(std::string number) {
    int digits_count = 0;
    std::size_t found;
    std::string digits = "0123456789";
    std::string digits_to_round = "56789";
    std::string result;

    for (std::size_t i = 0; i < number.size(); i++) {
        found = digits.find(number[i]);

        if (found != std::string::npos) {
            if (digits_count == 0 && number[i] != '0') {
                digits_count++;
                result += number[i];
            }
        }

        if (digits_count == 5) {
            if (number.size() > i + 1) {
                found = digits_to_round.find(number[i + 1]);
                if (found != std::string::npos) {
                    int last_digit = result[4] - '0';
                    last_digit++;
                    result[4] = last_digit + '0';
                }
            }
            break;
        }
    }

    while (result.size() != 5) {
        result += "0";
    }

    return result;
}

int main() {
    std::string number;
    std::string first_five_digits;

    while (std::cin >> number) {
        std::cout << (number[0] == '-' ? '-' : '+');
        first_five_digits = get_first_five_digits(number);
        std::cout <<
            first_five_digits[0] <<
            "." <<
            first_five_digits.substr(1) <<
            std::endl;
    }

    return 0;
}
