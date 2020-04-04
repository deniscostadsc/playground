#include <algorithm>
#include <iostream>
#include <string>

int
    main() {
    int t, i, count, limit;
    unsigned int j;
    bool minus_found;
    std::string s;

    std::cin >> t;

    for (i = 1; i <= t; i++) {
        std::cin >> s;
        count = 0;

        do {
            limit = 0;
            minus_found = false;

            for (j = 0; j < s.length(); j++) {
                if (s.at(j) == '-') {
                    minus_found = true;
                }
                if (minus_found && s.at(j) == '+') {
                    break;
                }
                limit++;
            }

            if (minus_found) {
                count++;
                std::replace(s.begin(), s.begin() + limit, '+', '*');
                std::replace(s.begin(), s.begin() + limit, '-', '+');
                std::replace(s.begin(), s.begin() + limit, '*', '-');
            }
        } while (minus_found);

        std::cout << "Case #" << i << ": " << count << std::endl;
    }

    return 0;
}
