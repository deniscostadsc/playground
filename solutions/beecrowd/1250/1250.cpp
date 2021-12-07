#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int16_t n, s, ss, c, h;
    unsigned i;
    char b;
    bool is_standup_shot, is_jump_shot;
    std::vector< char > bs;
    std::vector< int16_t > hs;

    std::cin >> n;

    while (n--) {
        std::cin >> s;
        ss = s;

        while (ss--) {
            std::cin >> h;
            hs.push_back(h);
        }

        while (s--) {
            std::cin >> b;
            bs.push_back(b);
        }

        c = 0;
        for (i = 0; i < hs.size(); i++) {
            is_standup_shot
                = (hs.at(i) == 1 || hs.at(i) == 2) && bs.at(i) == 'S';
            is_jump_shot = hs.at(i) > 2 && bs.at(i) == 'J';
            if (is_standup_shot || is_jump_shot) {
                c++;
            }
        }

        std::cout << c << std::endl;

        hs.clear();
        bs.clear();
    }

    return 0;
}
