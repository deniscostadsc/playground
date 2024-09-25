#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <vector>

struct arc {
    std::int32_t x;
    std::int32_t y;
    std::int32_t weight;
};

std::vector< arc > arcs;
std::map< std::int32_t, std::int32_t > disjoint_set;

void makeset(std::int32_t node) {
    disjoint_set[node] = node;
}

std::int32_t findset(std::int32_t node) {
    if (disjoint_set[node] != node) {
        disjoint_set[node] = findset(disjoint_set[node]);
    }
    return disjoint_set[node];
}

bool unionset(std::int32_t x, std::int32_t y) {
    std::int32_t parent_x = findset(disjoint_set[x]);
    std::int32_t parent_y = findset(disjoint_set[y]);

    if (parent_x == parent_y) {
        return false;
    }
    disjoint_set[parent_x] = parent_y;
    return true;
}

bool comparator(arc x, arc y) {
    return x.weight < y.weight;
}

int main() {
    std::int32_t m, n, x, y, z, count;

    while (std::cin >> m >> n && m && n) {
        while (n--) {
            std::cin >> x >> y >> z;
            makeset(x);
            makeset(y);

            arc a;
            a.x = x;
            a.y = y;
            a.weight = z;

            arcs.push_back(a);
        }

        std::sort(arcs.begin(), arcs.end(), comparator);
        count = 0;
        std::vector< arc >::iterator it;

        for (it = arcs.begin(); it != arcs.end(); it++) {
            if (unionset((*it).x, (*it).y)) {
                count += (*it).weight;
            }
        }

        std::cout << count << std::endl;

        disjoint_set.clear();
        arcs.clear();
    }

    return 0;
}
