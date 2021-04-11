#include <iostream>
#include <string>

std::string get_significand(std::string number) {
    int digits_count = 0;
    std::size_t found;
    std::string digits = "0123456789";
    std::string digits_to_round = "56789";
    std::string significand;

    for (std::size_t i = 0; i < number.size(); i++) {
        found = digits.find(number[i]);

        if (found != std::string::npos) {
            if (digits_count == 0 && number[i] == '0') {
                continue;
            }
            digits_count++;
            significand += number[i];
        } else {
            continue;
        }

        if (digits_count == 5) {
            if (number.size() > i + 1) {
                if (number[i + 1] == '.') {
                    found = digits_to_round.find(number[i + 2]);
                } else {
                    found = digits_to_round.find(number[i + 1]);
                }

                if (found != std::string::npos) {
                    int last_digit = significand[4] - '0';
                    last_digit++;
                    significand[4] = last_digit + '0';
                }
            }
            break;
        }
    }

    while (significand.size() != 5) {
        significand += "0";
    }

    return significand;
}

std::string get_exponent(std::string number) {
    int sign_shift = 0;
    bool has_leading_zeros;
    std::size_t dot, non_zero, first_non_zero;
    std::string exponent;
    std::string non_zero_digits = "123456789";
    std::string sign = "+";

    if (number[0] == '-' || number[0] == '+') {
        sign_shift = 1;
    }

    dot = number.find('.');
    if (dot == std::string::npos) {
        exponent = std::to_string(number.size() - 1 - sign_shift);
    } else {
        if (number[sign_shift] == '0') {
            sign = "-";
            first_non_zero = 666;
            for (int i = 0; i < static_cast< int >(non_zero_digits.size());
                 i++) {
                non_zero = number.find(non_zero_digits[i]);
                if (non_zero < first_non_zero) {
                    first_non_zero = non_zero;
                }
            }
            exponent = std::to_string(first_non_zero - 1 - sign_shift);
            if (first_non_zero == 666) {
                sign = "+";
                exponent = std::to_string(0);
            }
        } else {
            exponent = std::to_string(dot - 1 - sign_shift);
        }
    }

    if (exponent.size() == 1) {
        exponent.insert(0, "0");
    }

    return sign + exponent;
}

int main() {
    std::string number;
    std::string significand;
    std::string exponent;

    while (std::cin >> number) {
        significand = get_significand(number);
        exponent = get_exponent(number);

        std::cout << (number[0] == '-' ? '-' : '+');
        std::cout << significand[0] << "." << significand.substr(1) << "E"
                  << exponent << std::endl;
    }

    return 0;
}
