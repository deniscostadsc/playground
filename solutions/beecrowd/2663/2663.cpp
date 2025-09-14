#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

bool comparator(int16_t a, int16_t b) {
    return a > b;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, k, point, classified_competitors;
    std::vector< std::int16_t > competitors_points;

    while (std::cin >> n) {
        std::cin >> k;
        classified_competitors = 0;

        for (int16_t i = 0; i < n; i++) {
            std::cin >> point;
            competitors_points.push_back(point);
        }

        sort(competitors_points.begin(), competitors_points.end(), comparator);

        for (int16_t competitor_point : competitors_points) {
            if (competitor_point >= competitors_points[k - 1]) {
                classified_competitors += 1;
            }
        }

        std::cout << classified_competitors << '\n';

        competitors_points.clear();
    }

    return 0;
}
