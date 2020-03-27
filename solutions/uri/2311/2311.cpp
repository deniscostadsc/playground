#include <iostream>
#include <iomanip>

int main() {
    int n, i;
    double difficulty, max_score, min_score, current_score, total_score;
    std::string name;

    std::cin >> n;
    while (n--) {
        max_score = -1;
        min_score = 11;
        total_score = 0.0;

        std::cin >> name;
        std::cout << name << " ";
        std::cin >> difficulty;

        for (i = 0; i < 7; i++) {
            std::cin >> current_score;
            total_score += current_score;
            max_score = std::max(max_score, current_score);
            min_score = std::min(min_score, current_score);
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout <<
            (total_score - max_score - min_score) * difficulty <<
            std::endl;
    }

    return 0;
}
