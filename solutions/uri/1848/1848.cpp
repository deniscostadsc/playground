#include <iostream>
#include <map>

int main() {
    int sum = 0;
    std::string input;
    std::map< std::string, int > blink2int;

    blink2int["---"] = 0;
    blink2int["--*"] = 1;
    blink2int["-*-"] = 2;
    blink2int["-**"] = 3;
    blink2int["*--"] = 4;
    blink2int["*-*"] = 5;
    blink2int["**-"] = 6;
    blink2int["***"] = 7;

    while (std::cin >> input) {
        if (input == "caw") {
            std::cin.ignore(10, '\n');
            std::cout << sum << std::endl;
            sum = 0;
        } else {
            sum += blink2int[input];
        }
    }

    return 0;
}
