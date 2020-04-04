#include <cstring>
#include <iostream>
#include <string>

int positions[4];

void count_positions(std::string entrance2exit, std::string exit2entrance) {
    // 0 down
    // 1 right
    // 2 up
    // 3 left
    int direction = 0;
}

int main() {
    int t;
    std::string entrance2exit, exit2entrance;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::cin >> entrance2exit >> exit2entrance;
        memset(positions, 0, sizeof(positions));
    }

    return 0;
}
