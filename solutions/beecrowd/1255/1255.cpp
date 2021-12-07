#include <cstdint>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

int main() {
    uint16_t n, i;
    int16_t g;
    std::string s;
    std::string l = "abcdefghijklmnopqrstuvwxyz";
    std::string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int16_t c[26];

    std::cin >> n;
    getline(std::cin, s);  // it's a hack!
    while (n--) {
        memset(c, 0, sizeof(c));
        g = -1;

        getline(std::cin, s);
        for (i = 0; i < s.size(); i++) {
            if (l.find_first_of(s.at(i)) != std::string::npos) {
                c[l.find_first_of(s.at(i))]++;
                if (c[l.find_first_of(s.at(i))] > g) {
                    g = c[l.find_first_of(s.at(i))];
                }
            }

            if (u.find_first_of(s.at(i)) != std::string::npos) {
                c[u.find_first_of(s.at(i))]++;
                if (c[u.find_first_of(s.at(i))] > g) {
                    g = c[u.find_first_of(s.at(i))];
                }
            }
        }

        for (i = 0; i < 26; ++i) {
            if (c[i] == g) {
                std::cout << l.at(i);
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
