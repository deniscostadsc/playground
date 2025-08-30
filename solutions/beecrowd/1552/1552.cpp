#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>
#include <vector>

struct person {
    double x;
    double y;
    person *parent;
    std::int16_t rank;
};

std::vector< person * > people;

struct arc {
    person *p1;
    person *p2;
    double distance;
};

std::vector< arc * > arcs;

bool comparator(arc *a1, arc *a2) {
    return a1->distance < a2->distance;
}

void make_set(person *p) {
    p->parent = p;
    p->rank = 1;
    people.push_back(p);
}

person *findset(person *p) {
    if (p->parent != p) {
        p->parent = findset(p->parent);
    }
    return p->parent;
}

bool unionset(person *p1, person *p2) {
    person *root_p1 = findset(p1);
    person *root_p2 = findset(p2);

    if (root_p1 == root_p2) {
        return false;
    }

    if (root_p1->rank < root_p2->rank) {
        root_p1->parent = root_p2;
        root_p2->rank += root_p1->rank;
    } else {
        root_p2->parent = root_p1;
        root_p1->rank += root_p2->rank;
    }

    return true;
}

int main() {
    std::int16_t c, n, i, arcs_mst;
    double x, y, total_web;
    std::vector< arc * >::iterator it;
    std::vector< person * >::iterator it_p1, it_p2;

    std::cin >> c;

    while (c--) {
        std::cin >> n;
        arcs_mst = 0;

        for (i = 0; i < n; i++) {
            std::cin >> x >> y;

            person *p = new person;
            p->x = x;
            p->y = y;

            make_set(p);
        }

        for (it_p1 = people.begin(); it_p1 != people.end(); it_p1++) {
            for (it_p2 = it_p1 + 1; it_p2 != people.end(); it_p2++) {
                arc *a = new arc;
                a->p1 = *it_p1;
                a->p2 = *it_p2;
                a->distance = sqrt(
                    pow((*it_p1)->x - (*it_p2)->x, 2)
                    + pow((*it_p1)->y - (*it_p2)->y, 2));

                arcs.push_back(a);
            }
        }

        std::sort(arcs.begin(), arcs.end(), comparator);

        total_web = 0.0;

        for (it = arcs.begin(); it != arcs.end(); it++) {
            if (unionset((*it)->p1, (*it)->p2)) {
                total_web += (*it)->distance;
                arcs_mst++;

                if (arcs_mst == n - 1) {
                    break;
                }
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << (total_web * 100) / 10000 << std::endl;

        for (auto *a : arcs) {
            delete a;
        }
        for (auto *p : people) {
            delete p;
        }
        arcs.clear();
        people.clear();
    }

    return 0;
}
