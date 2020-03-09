#include <iostream>

int main() {
    int a_index_shift, lcs, current_lcs;
    std::string a, b;

    while (std::getline(std::cin, a) && std::getline(std::cin, b)) {
        a_index_shift = 0;
        lcs = 0;
        current_lcs = 0;

        for (int i = 0; i < (int)a.size(); i++) {
            for (int j = 0; j < (int)b.size(); j++) {
                if (!a_index_shift && a[i] == b[j]) {
                    a_index_shift = i + 1;
                    current_lcs++;
                    if (!lcs) {
                        lcs = 1;
                    }
                    continue;
                }

                if (a_index_shift &&
                        a_index_shift < a.size() &&
                        a[a_index_shift] == b[j]) {
                    a_index_shift++;
                    current_lcs++;
                } else {
                    if (current_lcs > lcs) {
                        lcs = current_lcs;
                    }

                    a_index_shift = 0;
                    current_lcs = 0;
                }
            }
        }

        std::cout << lcs << std::endl;
    }

    return 0;
}
