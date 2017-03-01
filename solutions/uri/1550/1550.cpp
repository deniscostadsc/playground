#include <cmath>
#include <iostream>
#include <map>
#include <queue>

int reverse(int number) {
    int reversed = 0;
    int digits_count = 0;

    if (number < 10) return number;

    while(static_cast<int>(number / std::pow(10, digits_count)) > 0) digits_count++;

    while(digits_count--) {
        reversed += (number % 10) * std::pow(10, digits_count);
        number /= 10;
    }
    return reversed;
}

void bfs(int number, int goal) {
    int current, reversed, levels = 0;
    std::queue<int> q;
    std::map<int, bool> visited;

    q.push(number);
    visited[number] = true;

    while(!q.empty()) {
        current = q.front();
        std::cout << "i+ " << current << std::endl;
        if (current == goal) {
            std::cout << levels << std::endl;
            break;
        }
        q.pop();

        if (!visited[current + 1]) {
            visited[current + 1] = true;
            q.push(current + 1);
        }

         reversed = reverse(current);

        if (!visited[reversed]) {
            visited[reversed] = true;
            q.push(reversed);
        }

        levels++;
    }
}

int main() {
    int t, a, b;

    std::cin >> t;

    while(t--) {
        std::cin >> a >> b;
        bfs(a, b);
    }

    return 0;
}
