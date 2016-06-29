#include <iostream>
#include <cstdio>
#include <string>

int main() {
    char c;
    long long s = 0;
    bool got_any_number = false;
    std::string valid_chars = "0123456789lOo";

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (got_any_number && s < 2147483647) {
                std::cout << s << std::endl;
            } else {
                std::cout << "error" << std::endl;
            }

            s = 0;
            got_any_number = false;
        }

        if (valid_chars.find(c) != std::string::npos) {
            if (c == 'o' || c == 'O') c = '0';
            if (c == 'l') c = '1';

            s = (s * 10) + c - '0';
            got_any_number = true;
        }
    }
    return 0;
}
