#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>

std::map<std::string,  std::vector<std::string> > graph;
std::map<std::string, bool> visited;
std::map<std::string, int> distances;
std::queue<std::string> q;

void create_chess_graph() {
    int i, j;
    std::string letters = "-abcdefgh";
    std::string numbers = "-12345678";
    std::string li, nj;

    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            li = letters[i];
            nj = numbers[j];

            if (i + 2 <= 8 && j + 1 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i + 2, 1) + numbers.substr(j + 1, 1));
            }

            if (i + 2 <= 8 && j - 1 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i + 2, 1) + numbers.substr(j - 1, 1));
            }

            if (i - 2 >= 1 && j + 1 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i - 2, 1) + numbers.substr(j + 1, 1));
            }

            if (i - 2 >= 1 && j - 1 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i - 2, 1) + numbers.substr(j - 1, 1));
            }

            if (i + 1 <= 8 && j + 2 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i + 1, 1) + numbers.substr(j + 2, 1));
            }

            if (i + 1 <= 8 && j - 2 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i + 1, 1) + numbers.substr(j - 2, 1));
            }

            if (i - 1 >= 1 && j + 2 <= 8) {
                graph[li + nj].push_back(
                    letters.substr(i - 1, 1) + numbers.substr(j + 2, 1));
            }

            if (i - 1 >= 1 && j - 2 >= 1) {
                graph[li + nj].push_back(
                    letters.substr(i - 1, 1) + numbers.substr(j - 2, 1));
            }
        }
    }
}

void unvisit() {
    int i, j;
    std::string letters = "-abcdefgh";
    std::string numbers = "-12345678";
    std::string li, nj;

    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            li = letters[i];
            nj = numbers[j];

            visited[li + nj] = false;
        }
    }
}

int bfs(std::string start, std::string goal) {
    std::vector<std::string>::iterator it;

    unvisit();

    visited[start] = true;
    q.push(start);
    distances[start] = 0;

    while (!q.empty()) {
        std::string current = q.front();
        q.pop();

        for (it = graph[current].begin(); it != graph[current].end(); it++) {
            if (!visited[*it]) {
                visited[*it] = true;
                q.push(*it);
                distances[*it] = distances[current] + 1;
            }
        }
    }

    return distances[goal];
}

int main() {
    std::string from, to;

    create_chess_graph();

    while (std::cin >> from >> to) {
        std::cout << "To get from " << from;
        std::cout << " to " << to << " takes " << bfs(from, to);
        std::cout << " knight moves." << std::endl;

        distances.clear();
    }

    return 0;
}
