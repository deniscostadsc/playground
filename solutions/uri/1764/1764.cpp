#include <iostream>
#include <utility>
#include <map>
#include <vector>

std::map<int, std::vector<std::pair<int, int> > > graph;

int main() {
    int m, n, x, y, z;
    std::pair<int, int> road_to;

    while (std::cin >> m >> n && m && n) {
        while (n--) {
            std::cin >> x >> y >> z;
            graph[x].push_back(std::make_pair(y, z));
            graph[y].push_back(std::make_pair(x, z));
        }

        graph.clear();
    }

    return 0;
}
