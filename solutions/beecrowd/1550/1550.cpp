#include <cmath>
#include <cstdint>
#include <iostream>
#include <map>
#include <queue>
#include <utility>

std::int16_t reverse(std::int16_t number) {
    std::int16_t reversed = 0;
    std::int16_t digits_count = 0;

    if (number < 10) {
        return number;
    }

    while (static_cast< std::int16_t >(number / std::pow(10, digits_count))
           > 0) {
        digits_count++;
    }

    while (digits_count--) {
        reversed += (number % 10) * std::pow(10, digits_count);
        number /= 10;
    }
    return reversed;
}

void bfs(std::int16_t number, std::int16_t goal) {
    std::int16_t reversed;
    std::pair< std::int16_t, std::int16_t > current;
    std::queue< std::pair< std::int16_t, std::int16_t > > q;
    std::map< std::int16_t, bool > visited;

    q.push(std::make_pair(number, 0));
    visited[number] = true;

    while (!q.empty()) {
        current = q.front();
        if (current.first == goal) {
            std::cout << current.second << std::endl;
            break;
        }
        q.pop();

        if (!visited[current.first + 1]) {
            visited[current.first + 1] = true;
            q.push(std::make_pair(current.first + 1, current.second + 1));
        }

        reversed = reverse(current.first);

        if (!visited[reversed]) {
            visited[reversed] = true;
            q.push(std::make_pair(reversed, current.second + 1));
        }
    }
}

int main() {
    std::int16_t t, a, b;

    std::cin >> t;

    while (t--) {
        std::cin >> a >> b;
        bfs(a, b);
    }

    return 0;
}
