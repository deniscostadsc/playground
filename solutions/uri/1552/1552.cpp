#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

struct person {
    double x;
    double y;
};

struct arc {
    person *p1;
    person *p2;
    double distance;
};

std::vector<arc*> arcs;

bool comparator(arc *a1, arc *a2) { return a1->distance < a2->distance; }

std::map<person*, person*> disjoint_set;

void make_set(person *p) {
    disjoint_set[p] = p;
}

person *findset(person *p) {
    if (disjoint_set[p] != p) {
        disjoint_set[p] = findset(disjoint_set[p]);
    }
    return disjoint_set[p];
}

bool unionset(person *p1, person *p2) {
    person *parent_p1 = findset(p1);
    person *parent_p2 = findset(p2);

    if (parent_p1->x == parent_p2->x && parent_p1->y == parent_p2->y) {
        return false;
    }

    disjoint_set[p1] = parent_p2;
    return true;
}

int main() {
    int c, n, i;
    double x, y, total_web;
    std::vector<arc*>::iterator it;
    std::map<person*, person*>::iterator it_p1, it_p2;

    std::cin >> c;

    while (c--) {
        std::cin >> n;

        for (i = 0; i < n; i++) {
            std::cin >> x >> y;

            person *p = new person;
            p->x = x;
            p->y = y;

            make_set(p);
        }

        for (it_p1 = disjoint_set.begin();
            it_p1 != disjoint_set.end(); it_p1++) {

            for (it_p2 = disjoint_set.begin();
                it_p2 != disjoint_set.end(); it_p2++) {

                if (it_p1->first->x == it_p2->first->x &&
                    it_p1->first->y == it_p2->first->y) {
                    continue;
                }

                arc *a = new arc;
                a->p1 = it_p1->first;
                a->p2 = it_p2->first;
                a->distance = sqrt(
                    pow(it_p1->first->x - it_p2->first->x, 2) +
                    pow(it_p1->first->y - it_p2->first->y, 2));

                arcs.push_back(a);
            }
        }

        std::sort(arcs.begin(), arcs.end(), comparator);

        total_web = 0.0;

        for (it = arcs.begin(); it != arcs.end(); it++) {
            if (unionset((*it)->p1, (*it)->p2)) {
                total_web += (*it)->distance;
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << (total_web * 100) / 10000 << std::endl;

        arcs.clear();
        disjoint_set.clear();
    }

    return 0;
}
