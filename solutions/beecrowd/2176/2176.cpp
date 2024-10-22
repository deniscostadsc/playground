#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string s;

    while (std::cin >> s) {
        std::cout << s << (count(s.begin(), s.end(), '1') % 2 == 0 ? 0 : 1)
                  << std::endl;
    }
    return 0;
}
