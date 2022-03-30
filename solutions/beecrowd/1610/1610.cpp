#include <cstdint>
#include <cstring>
#include <iostream>
#include <map>
#include <stack>
#include <vector>

std::int16_t visited[10001];
std::int16_t scc_count;  // scc = strongly connected components

std::map< std::int16_t, std::vector< std::int16_t > > graph;
std::map< std::int16_t, std::vector< std::int16_t > > transposed_graph;
std::stack< std::int16_t > traverse_order;

void order_filler_dfs(std::int16_t i) {
    std::vector< std::int16_t >::iterator it;

    visited[i] = 1;

    for (it = graph[i].begin(); it != graph[i].end(); it++) {
        if (!visited[*it]) {
            order_filler_dfs(*it);
        }
    }

    traverse_order.push(i);
}

void scc_counter_dfs(std::int16_t i) {
    std::vector< std::int16_t >::iterator it;

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
    std::int16_t t, n, m, a, b;
    std::map< std::int16_t, std::vector< std::int16_t > >::iterator it;

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
