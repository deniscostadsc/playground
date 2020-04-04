#include <cmath>
#include <iostream>
#include <map>
#include <string>

int main() {
    int integer, multiplier, current_digit;
    std::map< int, std::string > int_roman_base;
    std::string roman;

    int_roman_base[0] = "";
    int_roman_base[1] = "I";
    int_roman_base[2] = "II";
    int_roman_base[3] = "III";
    int_roman_base[4] = "IV";
    int_roman_base[5] = "V";
    int_roman_base[6] = "VI";
    int_roman_base[7] = "VII";
    int_roman_base[8] = "VIII";
    int_roman_base[9] = "IX";
    int_roman_base[10] = "X";
    int_roman_base[20] = "XX";
    int_roman_base[30] = "XXX";
    int_roman_base[40] = "XL";
    int_roman_base[50] = "L";
    int_roman_base[60] = "LX";
    int_roman_base[70] = "LXX";
    int_roman_base[80] = "LXXX";
    int_roman_base[90] = "XC";
    int_roman_base[100] = "C";
    int_roman_base[200] = "CC";
    int_roman_base[300] = "CCC";
    int_roman_base[400] = "CD";
    int_roman_base[500] = "D";
    int_roman_base[600] = "DC";
    int_roman_base[700] = "DCC";
    int_roman_base[800] = "DCCC";
    int_roman_base[900] = "CM";
    int_roman_base[1000] = "M";

    while (std::cin >> integer) {
        multiplier = 1;
        roman = "";

        while (integer > 0) {
            current_digit = integer % 10;
            integer /= 10;

            roman = int_roman_base[current_digit * multiplier] + roman;
            multiplier *= 10;
        }

        std::cout << roman << std::endl;
    }

    return 0;
}
