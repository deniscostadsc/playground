#include <iostream>

int main() {
    int16_t t;
    float time, fastest_time;

    while (std::cin >> t) {
        fastest_time = 12.0;

        for (int16_t i = 0; i < t; i++) {
            std::cin >> time;

            if (time < fastest_time) {
                fastest_time = time;
            }
        }

        std::cout << fastest_time << '\n';
    }

    return 0;
}
