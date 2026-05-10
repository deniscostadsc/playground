#include <cstdint>
#include <iostream>
#include <set>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int32_t n, m, person;
    bool first_person;
    std::vector< int32_t > people_in_line;
    std::set< int32_t > people_who_left_line;

    while (std::cin >> n) {
        for (int32_t i = 0; i < n; i++) {
            std::cin >> person;
            people_in_line.push_back(person);
        }

        std::cin >> m;
        for (int32_t i = 0; i < m; i++) {
            std::cin >> person;
            people_who_left_line.insert(person);
        }

        first_person = true;
        for (int32_t person : people_in_line) {
            if (people_who_left_line.contains(person)) {
                continue;
            }

            if (!first_person) {
                std::cout << ' ';
            }

            std::cout << person;
            first_person = false;
        }

        std::cout << '\n';

        people_in_line.clear();
        people_who_left_line.clear();
    }

    return 0;
}
