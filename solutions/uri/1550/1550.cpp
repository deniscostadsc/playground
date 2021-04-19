#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <utility>

int reverse(int number) {
    int reversed = 0;
    int digits_count = 0;

    if (number < 10) {
        return number;
    }

    while (static_cast< int >(number / std::pow(10, digits_count)) > 0) {
        digits_count++;
    }

    while (digits_count--) {
        reversed += (number % 10) * std::pow(10, digits_count);
        number /= 10;
    }
    return reversed;
}

void bfs(int number, int goal) {
    int reversed;
    std::pair< int, int > current;
    std::queue< std::pair< int, int > > q;
    std::map< int, bool > visited;

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
    int t, a, b;

    std::cin >> t;

    while (t--) {
        std::cin >> a >> b;
        bfs(a, b);
    }

    return 0;
}
