#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::string line;
    std::int16_t proc, read, clocks;

    while (getline(std::cin, line)) {
        clocks = 0;
        read = 0;
        std::cin >> proc;

        for (size_t i = 0; i < line.length(); ++i) {
            if (line.at(i) == 'W') {
                clocks++;
            } else {
                read++;
            }

            if (line.at(i) == 'W' || i == line.length() - 1) {
                if (read) {
                    clocks += read / proc;
                    if (read % proc != 0) {
                        clocks++;
                    }
                    read = 0;
                }
            }
        }

        std::cout << clocks << std::endl;

        getline(std::cin, line);  // it's a hack
    }
    return 0;
}
