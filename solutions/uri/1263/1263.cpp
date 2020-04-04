#include <cstdio>
#include <iostream>
#include <string>

int main() {
    int c;
    unsigned int i;
    bool begin, match;
    int previous_letter, current_letter;
    std::string lower = "abcdefghijklmnopqrstuvwxyz";
    std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string line;

    while (getline(std::cin, line)) {
        c = 0;
        match = false;

        if (lower.find_first_of(line.at(0)) != std::string::npos) {
            previous_letter = lower.find_first_of(line.at(0));
        } else {
            previous_letter = upper.find_first_of(line.at(0));
        }

        begin = false;

        for (i = 1; i < line.size(); i++) {
            if (line.at(i) == ' ') {
                begin = true;
                continue;
            }

            if (begin) {
                if (lower.find_first_of(line.at(i)) != std::string::npos) {
                    current_letter = lower.find_first_of(line.at(i));
                } else {
                    current_letter = upper.find_first_of(line.at(i));
                }

                if (current_letter == previous_letter && !match) {
                    c++;
                    match = true;
                } else if (current_letter == previous_letter) {
                    match = true;
                } else {
                    match = false;
                }

                previous_letter = current_letter;
            }

            begin = false;
        }

        std::cout << c << std::endl;
    }

    return 0;
}
