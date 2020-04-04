#include <iostream>
#include <string>

int
    main() {
    int c;

    std::string s;

    while (std::cin >> s) {
        c = 0;

        for (unsigned int i = 0; i < s.length(); ++i) {
            if (s.at(i) == ')') {
                c--;
            } else if (s.at(i) == '(') {
                c++;
            }

            if (c < 0)
                break;
        }

        if (c == 0) {
            std::cout << "correct" << std::endl;
        } else {
            std::cout << "incorrect" << std::endl;
        }
    }

    return 0;
}
