#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

struct arc {
    int x;
    int y;
    int weight;
};

struct disjoint_node {
    int node;
    disjoint_node *parent;
};

std::vector<arc> graph;
std::map<int, disjoint_node> disjoint_set;

void makeset(int node) {
    disjoint_set[node].node = node;
    disjoint_set[node].parent = &disjoint_set[node];
}

disjoint_node *findset(disjoint_node *dn) {
    if (dn->parent == dn) return dn;
    dn->parent = findset(dn->parent);  // path compression
    return dn->parent;
}

bool unionset(int x, int y) {
    disjoint_node *parent_x = findset(&disjoint_set[x]);
    disjoint_node *parent_y = findset(&disjoint_set[y]);

    if (parent_x->node == parent_y->node) return false;
    parent_x->parent = parent_y;
    return true;
}

bool comparator (arc x, arc y) { return x.weight < y.weight; }


int main() {
    int m, n, x, y, z, count;
    std::pair<int, int> road_to;

    while (std::cin >> m >> n && m && n) {
        while (n--) {
            std::cin >> x >> y >> z;
            makeset(x);
            makeset(y);

            arc a;
            a.x = x;
            a.y = y;
            a.weight = z;

            graph.push_back(a);
        }

        std::sort(graph.begin(), graph.end(), comparator);
        count = 0;
        std::vector<arc>::iterator it;

        for (it = graph.begin(); it != graph.end(); it++) {
            if (unionset((*it).x, (*it).y)) {
                count += (*it).weight;
            }
        }

        std::cout << count << std::endl;

        disjoint_set.clear();
        graph.clear();
    }

    return 0;
}
