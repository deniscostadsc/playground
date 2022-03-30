#include <iostream>
#include <map>
#include <string>

// The lazy guy uses bash...
// cat names.txt | tr ',' '\n' | sed 's/"//g' | sort > in.txt

int main() {
    std::int32_t index = 1, name_sum, total_score = 0;
    std::uint32_t i;
    std::string name;

    // Is there a better way to do this?
    std::map< char, std::int16_t > alphabet;
    alphabet['A'] = 1;
    alphabet['B'] = 2;
    alphabet['C'] = 3;
    alphabet['D'] = 4;
    alphabet['E'] = 5;
    alphabet['F'] = 6;
    alphabet['G'] = 7;
    alphabet['H'] = 8;
    alphabet['I'] = 9;
    alphabet['J'] = 10;
    alphabet['K'] = 11;
    alphabet['L'] = 12;
    alphabet['M'] = 13;
    alphabet['N'] = 14;
    alphabet['O'] = 15;
    alphabet['P'] = 16;
    alphabet['Q'] = 17;
    alphabet['R'] = 18;
    alphabet['S'] = 19;
    alphabet['T'] = 20;
    alphabet['U'] = 21;
    alphabet['V'] = 22;
    alphabet['W'] = 23;
    alphabet['X'] = 24;
    alphabet['Y'] = 25;
    alphabet['Z'] = 26;

    while (std::cin >> name) {
        name_sum = 0;

        for (i = 0; i < name.length(); i++) {
            name_sum += alphabet[name[i]];
        }

        total_score += name_sum * index++;
    }

    std::cout << total_score << std::endl;

    return 0;
}
