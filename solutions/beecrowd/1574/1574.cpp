#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t i, t, n, previous_index, position, commands[101];
    std::string command, _junk;

    std::cin >> t;

    while (t--) {
        position = 0;

        std::cin >> n;
        for (i = 1; i <= n; i ++) {
            std::cin >> command;

            if (command == "LEFT") {
                position--;
                commands[i] = -1;
            } else if (command == "RIGHT") {
                position++;
                commands[i] = 1;
            } else {
                std::cin >> _junk >> previous_index;
                position += commands[previous_index];
                commands[i] = commands[previous_index];
            }
        }

        std::cout << position << std::endl;
    }

    return 0;
}
