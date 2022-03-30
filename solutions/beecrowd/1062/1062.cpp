#include <cstdint>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

std::queue< std::int16_t > trains;
std::stack< std::int16_t > station;
std::vector< std::int16_t > required_order;

std::int16_t next_train(std::int16_t n) {
    std::int16_t train;

    if (!station.empty() && n == station.top()) {
        train = station.top();
        station.pop();
        return train;
    }

    while (!trains.empty() && n != trains.front()) {
        station.push(trains.front());
        trains.pop();
    }

    if (!trains.empty() && n == trains.front()) {
        train = trains.front();
        trains.pop();
        return train;
    }

    return 1001;
}

int main() {
    std::int16_t n, t, i;
    bool valid;

    while (std::cin >> n && n) {
        while (std::cin >> t && t) {
            valid = true;

            required_order.push_back(t);
            for (i = 1; i < n; i++) {
                std::cin >> t;
                required_order.push_back(t);
                trains.push(i);
            }
            trains.push(n);

            for (i = 0; i < n; i++) {
                if (next_train(required_order[i]) == 1001) {
                    valid = false;
                    break;
                }
            }

            std::cout << (valid ? "Yes" : "No") << std::endl;

            required_order.clear();
            while (!trains.empty()) {
                trains.pop();
            }
            while (!station.empty()) {
                station.pop();
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
