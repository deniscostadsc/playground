#include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line;
    char previous_character, character;
    int32_t current_repeated_sequence, longest_repeated_sequence;

    while (std::cin >> line) {
        previous_character = line[0];
        current_repeated_sequence = 1;
        longest_repeated_sequence = 1;

        for (int32_t i = 1; i < line.size(); i++) {
            character = line[i];
            if (previous_character == character) {
                current_repeated_sequence += 1;
                longest_repeated_sequence = std::max(
                    longest_repeated_sequence, current_repeated_sequence);
            } else {
                current_repeated_sequence = 1;
            }
            previous_character = character;
        }

        std::cout << longest_repeated_sequence << '\n';
    }

    return 0;
}
