#include <cstdio>
#include <iostream>
#include <string>

int main() {
    char c;
    long long s = 0;
    bool got_any_number = false, got_invalid_char = false, got_overflow = false;
    std::string valid_chars = "0123456789lOo";
    std::string ignored_chars = ", ";

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (got_any_number && !got_overflow && !got_invalid_char) {
                std::cout << s << std::endl;
            } else {
                std::cout << "error" << std::endl;
            }

            s = 0;
            got_any_number = false;
            got_invalid_char = false;
            got_overflow = false;

            continue;
        }

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
    return 0;
}
