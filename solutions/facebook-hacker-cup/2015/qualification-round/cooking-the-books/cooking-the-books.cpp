#include <cstdio>
#include <iostream>
#include <string>

int main() {
    int t, j, k, i = 1;
    std::string n, lowest, greatest, copy;
    char c;

    std::cin >> t;

    while (i <= t) {
        std::cin >> n;
        lowest = n;
        greatest = n;
        copy = n;

        for (j = 0; (unsigned)j < n.size(); j++) {
            for (k = 0; (unsigned)k < n.size(); k++) {
                if ((j == 0 && copy[k] == '0') || (k == 0 && copy[j] == '0')) {
                    continue;
                }

                c = copy[j];
                copy[j] = copy[k];
                copy[k] = c;

                if (copy < lowest)
                    lowest = copy;
                if (copy > greatest)
                    greatest = copy;

                copy = n;
            }
        }

        std::cout << "Case #" << i << ": ";
        std::cout << lowest << " " << greatest << std::endl;

        i++;
    }

    return 0;
}
