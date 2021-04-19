#include <cstdio>
#include <iostream>
#include <map>
#include <string>

int main() {
    int i, count, acum;
    std::string jingle;

    std::map< char, int > duration;
    duration['W'] = 64;
    duration['H'] = 32;
    duration['Q'] = 16;
    duration['E'] = 8;
    duration['S'] = 4;
    duration['T'] = 2;
    duration['X'] = 1;

    while (getline(std::cin, jingle) && jingle != "*") {
        count = 0;
        acum = 0;

        for (i = 0; i < static_cast< int >(jingle.size()); i++) {
            if (jingle[i] == '/') {
                if (acum == 64) {
                    count++;
                }
                acum = 0;
            } else {
                acum += duration[jingle[i]];
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
