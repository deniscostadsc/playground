#include <cstdint>
#include <cstdio>
#include <iostream>
#include <string>

int main() {
    char c;
    std::int64_t s = 0;
    bool got_any_number = false, got_invalid_char = false, got_overflow = false;
    std::string line, valid_chars = "0123456789lOo", ignored_chars = ", ";

    while (getline(std::cin, line)) {
        for (std::int16_t i = 0; i < line.size(); i++) {
            c = line[i];

            if (valid_chars.find(c) != std::string::npos) {
                if (c == 'o' || c == 'O') {
                    c = '0';
                }
                if (c == 'l') {
                    c = '1';
                }

                s = (s * 10) + c - '0';
                if (s > 2147483647) {
                    got_overflow = true;
                    s = 0;
                }
                got_any_number = true;
            } else if (ignored_chars.find(c) == std::string::npos) {
                got_invalid_char = true;
            }
        }

        if (got_any_number && !got_overflow && !got_invalid_char) {
            std::cout << s << std::endl;
        } else {
            std::cout << "error" << std::endl;
        }

        s = 0;
        got_any_number = false;
        got_invalid_char = false;
        got_overflow = false;
    }

    return 0;
}
