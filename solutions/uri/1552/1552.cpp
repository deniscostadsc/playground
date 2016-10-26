#include <algorithm>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

struct point {
    double x;
    double y;
};

struct arc {
    int i;
    int j;
    double distance;
};

std::vector<point> points;
std::vector<arc> arcs;

bool comparator(arc i, arc j) { return i.distance < j.distance; }

std::map<int, int> disjoint_set;

void make_set(int person) {
    disjoint_set[person] = person;
}

int findset(int person) {
    if (disjoint_set[person] == person) return person;
    disjoint_set[person] = findset(disjoint_set[person]);
    return disjoint_set[person];
}

bool unionset(int person_i, int person_j) {
    int parent_i = findset(person_i);
    int parent_j = findset(person_j);

    if (parent_i == parent_j) return false;
    disjoint_set[person_i] = parent_j;
    return true;
}

int main() {
    int c, n, i, j;
    double x, y, total_web;
    std::vector<arc>::iterator it;

    std::cin >> c;

    while (c--) {
        std::cin >> n;
        for (i = 0; i < n; i++) {
            std::cin >> x >> y;

            point p;
            p.x = x;
            p.y = y;

            points.push_back(p);
            make_set(i);
        }

        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                arc a;
                a.i = i;
                a.j = j;
                a.distance = sqrt(pow(std::abs(points[i].x - points[j].x), 2) +
                    pow(std::abs(points[i].y - points[j].y), 2));
                arcs.push_back(a);
            }
        }

        std::sort(arcs.begin(), arcs.end(), comparator);
        total_web = 0.0;

        for (it = arcs.begin(); it != arcs.end(); it++) {
            if (unionset((*it).i, (*it).j)) {
                total_web += (*it).distance;
            }
        }

        std::cout << std::fixed << std::setprecision(2);
        std::cout << (total_web * 100) / 10000 << std::endl;

        arcs.clear();
        disjoint_set.clear();
        points.clear();
    }

    return 0;
}
