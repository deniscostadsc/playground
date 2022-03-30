#include <cstdint>
#include <iostream>
#include <vector>

std::vector< std::int32_t > sequence;

void ackermann(std::int32_t h) {
    sequence.push_back(h);
    if (h != 1) {
        if (h % 2 == 0) {
            ackermann(h / 2);
        } else {
            ackermann(3 * h + 1);
        }
    }
}

int main() {
    std::int32_t h, greatest;

    while (std::cin >> h && h) {
        ackermann(h);
        greatest = 0;

        for (std::string::size_type i = 0; i < sequence.size(); i++) {
            if (greatest < sequence.at(i)) {
                greatest = sequence.at(i);
            }
        }

        std::cout << greatest << std::endl;
        sequence.clear();
    }

    return 0;
}
