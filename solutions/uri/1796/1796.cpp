#include <iostream>

int main() {
    int q, v, not_ok_count, survey_count;

    while (std::cin >> q) {
        not_ok_count = 0;
        survey_count = 0;

        while (q--) {
            std::cin >> v;
            if (v) {
                not_ok_count++;
            }
            survey_count++;
        }

        if ((not_ok_count < survey_count / 2 && survey_count % 2 == 0)
            || (not_ok_count < survey_count / 2 + 1 && survey_count % 2 == 1)) {
            std::cout << "Y";
        } else {
            std::cout << "N";
        }
        std::cout << std::endl;
    }

    return 0;
}
