#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, male_count = 0, female_count = 0;
    std::string name, gender;

    std::cin >> n;

    while (std::cin >> name >> gender) {
        if (gender == "M") {
            male_count++;
        } else {
            female_count++;
        }
    }

    std::cout << male_count << " carrinhos\n";
    std::cout << female_count << " bonecas\n";

    return 0;
}
