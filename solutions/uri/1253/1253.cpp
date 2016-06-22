#include <iostream>
#include <string>

int main() {
    unsigned int i;
    int n, c;
    std::string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string s;

    std::cin >> n;

    while (n--) {
        std::cin >> s;
        std::cin >> c;

        for (i = 0; i <= s.length() - 1; i++) {
            s.at(i) = a.at(a.find_last_of(s.at(i)) - c);
        }

        std::cout << s << std::endl;
    }

    return 0;
}
