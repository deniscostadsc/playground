#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    int32_t width, length, r1, r2, x_r1, x_r2, y_r1, y_r2,
        distance_betweeen_circle_centers;

    while (std::cin >> width >> length >> r1 >> r2 && width && length && r1
           && r2) {
        if (width < r1 * 2 || width < r2 * 2 || length < r1 * 2
            || length < r2 * 2) {
            std::cout << "N" << std::endl;
            continue;
        }

        x_r1 = r1;
        y_r1 = r1;
        x_r2 = width - r2;
        y_r2 = length - r2;
        distance_betweeen_circle_centers
            = sqrt(pow((x_r2 - x_r1), 2) + pow((y_r2 - y_r1), 2));

        if (distance_betweeen_circle_centers >= (r1 + r2)) {
            std::cout << "S" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}
