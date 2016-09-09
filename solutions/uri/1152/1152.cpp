#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

struct vertex {
    int node_a;
    int node_b;
    int weight;
};

std::vector<vertex> graph;

struct disjointset_node {
    // Simple disjointset without rank logic. Just to check cycles.
    int data;
    disjointset_node *parent;
};

std::map<int, disjointset_node> disjointset;

void makeset(int data) {
    disjointset[data].data = data;
    disjointset[data].parent = &disjointset[data];
}

disjointset_node *findset(disjointset_node *n) {
    disjointset_node *parent = n->parent;

    if (parent == n) return n;

    n->parent = findset(n->parent); // path compression
    return n->parent;
}

bool comparator(vertex a, vertex b) {return a.weight < b.weight;}

bool unionset(int data_a, int data_b) {
    disjointset_node node_a = disjointset[data_a];

    disjointset_node node_b = disjointset[data_b];

    disjointset_node *parent_a = findset(&node_a);
    disjointset_node *parent_b = findset(&node_b);

    if (parent_a->data == parent_b->data) return false;

    parent_a->parent = parent_b;
    return true;
}

int main() {
    int m, n, x, y, z, i, count;

    while (std::cin >> m >> n && m && n) {
        for (i = 0; i < n; i++) {
            std::cin >> x >> y >> z;
            makeset(x);
            makeset(y);

            vertex v;
            v.node_a = x;
            v.node_b = y;
            v.weight = z;

            graph.push_back(v);
        }

        std::sort(graph.begin(), graph.end(), comparator);
        count = 0;
        std::vector<vertex>::iterator it;

        for (it = graph.begin(); it != graph.end(); it++) {
            if (!unionset((*it).node_a, (*it).node_b)) count += (*it).weight;
        }

        std::cout << count << std::endl;

        disjointset.clear();
        graph.clear();
    }
    return 0;
}
