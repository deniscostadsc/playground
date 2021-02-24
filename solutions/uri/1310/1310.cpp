#include <algorithm>
#include <iostream>

int main() {
    int n, per_day_cost, revenue, largest, largest_start;

    while (std::cin >> n) {
        std::cin >> per_day_cost;

        largest = -1001;
        largest_start = 0;

        for (int i = 0; i < n; i++) {
            std::cin >> revenue;

            largest_start += revenue - per_day_cost;

            if (largest < largest_start) {
                largest = largest_start;
            }

            if (largest_start < 0) {
                largest_start = 0;
            }
        }

        std::cout << (largest >= 0 ? largest : 0) << std::endl;
    }

    return 0;
}
