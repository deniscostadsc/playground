#include <cstdint>
#include <iostream>

int main() {
    int16_t n, university_id, contra_strike_gameplay_count, id, gameplay;

    while (std::cin >> n >> university_id) {
        contra_strike_gameplay_count = 0;
        for (int16_t k = 0; k < n; k++) {
            std::cin >> id >> gameplay;
            if (id == university_id && gameplay == 0) {
                contra_strike_gameplay_count++;
            }
        }
        std::cout << contra_strike_gameplay_count << std::endl;
    }

    return 0;
}
