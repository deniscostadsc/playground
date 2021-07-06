#include <cstdint>
#include <cstdio>
#include <iostream>
#include <string>

int main() {
    int16_t c, n;
    std::string name;

    std::cin >> c;

    while (c--) {
        std::cin >> name >> n;
        if (name == "Thor") {
            puts("Y");
        } else {
            puts("N");
        }
    }
    return 0;
}
