#include <iostream>
#include <string>

int main() {
    unsigned int i;
    std::string l = "abcdefghijklmnopqrstuvwxyz";
    std::string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string str;
    bool up;

    while (getline(std::cin, str)) {
        up = true;

        for (i = 0; i < str.length(); i++) {
            if (str.at(i) == ' ') {
                std::cout << " ";
                continue;
            }

            if (up) {
                if (l.find_first_of(str.at(i)) != std::string::npos) {
                    std::cout << u.at(l.find_first_of(str.at(i)));
                } else {
                    std::cout << u.at(u.find_first_of(str.at(i)));
                }
            } else {
                if (u.find_first_of(str.at(i)) != std::string::npos) {
                    std::cout << l.at(u.find_first_of(str.at(i)));
                } else {
                    std::cout << l.at(l.find_first_of(str.at(i)));
                }
            }

            up = !up;
        }

        std::cout << std::endl;
    }

    return 0;
}
