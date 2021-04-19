#include <cstring>
#include <iostream>
#include <map>
#include <stack>
#include <vector>

int visited[10001];
int scc_count;  // scc = strongly connected components

std::map< int, std::vector< int > > graph;
std::map< int, std::vector< int > > transposed_graph;
std::stack< int > traverse_order;

void order_filler_dfs(int i) {
    std::vector< int >::iterator it;

    visited[i] = 1;

    for (it = graph[i].begin(); it != graph[i].end(); it++) {
        if (!visited[*it]) {
            order_filler_dfs(*it);
        }
    }

    traverse_order.push(i);
}

void scc_counter_dfs(int i) {
    std::vector< int >::iterator it;

    visited[i] = 1;

    for (it = transposed_graph[i].begin(); it != transposed_graph[i].end();
         it++) {
        if (!visited[*it]) {
            scc_count++;
            scc_counter_dfs(*it);
        }
    }
}

int main() {
    int t, n, m, a, b;
    std::map< int, std::vector< int > >::iterator it;

    std::cin >> t;

    while (t--) {
        std::cin >> n >> m;

        while (m--) {
            std::cin >> a >> b;
            graph[a].push_back(b);
            transposed_graph[b].push_back(a);
        }

        memset(visited, 0, sizeof(visited));
        for (it = graph.begin(); it != graph.end(); it++) {
            if (!visited[it->first]) {
                order_filler_dfs(it->first);
            }
        }

        memset(visited, 0, sizeof(visited));
        scc_count = 0;
        while (!traverse_order.empty()) {
            if (!visited[traverse_order.top()]) {
                scc_counter_dfs(traverse_order.top());
            }
            traverse_order.pop();
        }

        if (scc_count) {
            std::cout << "SIM" << std::endl;
        } else {
            std::cout << "NAO" << std::endl;
        }

        graph.clear();
        transposed_graph.clear();
    }

    return 0;
}
