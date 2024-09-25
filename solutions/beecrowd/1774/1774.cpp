#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <vector>

struct cable {
    std::int32_t router_1;
    std::int32_t router_2;
    std::int32_t price;
};

std::vector< cable > cables;
std::map< std::int32_t, std::int32_t > disjoint_set;

void makeset(std::int32_t router) {
    disjoint_set[router] = router;
}

std::int32_t findset(std::int32_t router) {
    if (disjoint_set[router] != router) {
        disjoint_set[router] = findset(disjoint_set[router]);
    }
    return disjoint_set[router];
}

bool unionset(std::int32_t router_1, std::int32_t router_2) {
    std::int32_t router_1_parent = findset(disjoint_set[router_1]);
    std::int32_t router_2_parent = findset(disjoint_set[router_2]);

    if (router_1_parent == router_2_parent) {
        return false;
    }
    disjoint_set[router_1_parent] = router_2_parent;
    return true;
}

bool comparator(cable cable_1, cable cable_2) {
    return cable_1.price < cable_2.price;
}

int main() {
    std::int32_t r, c, v, w, p, total_price;

    std::cin >> r >> c;

    while (c--) {
        std::cin >> v >> w >> p;
        makeset(v);
        makeset(w);

        cable a;
        a.router_1 = v;
        a.router_2 = w;
        a.price = p;

        cables.push_back(a);
    }

    std::sort(cables.begin(), cables.end(), comparator);
    std::vector< cable >::iterator it;
    total_price = 0;

    for (it = cables.begin(); it != cables.end(); it++) {
        if (unionset((*it).router_1, (*it).router_2)) {
            total_price += (*it).price;
        }
    }

    std::cout << total_price << std::endl;

    return 0;
}
