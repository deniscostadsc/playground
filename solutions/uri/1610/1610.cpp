#include <iostream>
#include <map>
#include <vector>
#include <cstring>

std::map<int, std::vector<int> > graph;
int visited[10001];

bool has_loop(int i) {
    bool result;
    std::vector<int>::iterator it;

    visited[i] = 1;
    result = false;

    for (it = graph[i].begin(); it != graph[i].end(); it++) {
        if (visited[*it]) {
            return true;
        } else {
            result ^= has_loop(*it);
        }
    }

    return result;
}

int main() {
    int t, n, m, a, b;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        while (m--) {
            std::cin >> a >> b;
            graph[a].push_back(b);
        }

        memset(visited, 0, sizeof(visited));

        if (has_loop(1)) {
            std::cout << "SIM" << std::endl;
        } else {
            std::cout << "NAO" << std::endl;
        }

        graph.clear();
    }
    return 0;
}
