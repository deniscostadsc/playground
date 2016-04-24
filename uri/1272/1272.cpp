#include <iostream>
#include <string>

int main() {
    int n;
    unsigned int i;
    bool first;
    std::string s;

    std::cin >> n;
    getline(std::cin, s);  // it's a hack

    while (n--) {
        getline(std::cin, s);
        first = false;

        for (i = 0; i < s.length(); i++) {
            if (s.at(i) == ' ' && first) first = !first;

            if (s.at(i) != ' ' && !first) {
                first = !first;
                std::cout << s.at(i);
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
