#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <map>
#include <stack>
#include <vector>

std::int16_t indexes[2001];
std::int16_t lowlink[2001];
std::int16_t onstack[2001];
std::int16_t current_index;

std::map< std::int16_t, std::vector< std::int16_t > > graph;
std::map< std::int16_t, std::vector< std::int16_t > > scc;
std::stack< std::int16_t > s;

void dfs_tarjan(std::int16_t v) {
    std::vector< std::int16_t >::iterator v_it;
    indexes[v] = lowlink[v] = current_index++;
    s.push(v);
    onstack[v] = 1;

    for (v_it = graph[v].begin(); v_it != graph[v].end(); v_it++) {
        if (indexes[*v_it] == -1) {
            dfs_tarjan(*v_it);
            lowlink[v] = std::min(lowlink[v], lowlink[*v_it]);
        } else if (onstack[*v_it]) {
            lowlink[v] = std::min(lowlink[v], indexes[*v_it]);
        }
    }

    if (lowlink[v] == indexes[v]) {
        std::int16_t w;

        do {
            w = s.top();
            s.pop();
            onstack[w] = 0;
            scc[v].push_back(w);
        } while (v != w);
    }
}

void tarjan() {
    std::map< std::int16_t, std::vector< std::int16_t > >::iterator m_it;

    for (m_it = graph.begin(); m_it != graph.end(); m_it++) {
        if (indexes[m_it->first] == -1) {
            dfs_tarjan(m_it->first);
        }
    }
}

int main() {
    std::int16_t n, m, v, w, p;
    std::map< std::int16_t, std::vector< std::int16_t > >::iterator m_it;
    std::vector< std::int16_t >::iterator v_it;

    while (std::cin >> n >> m && n && m) {
        current_index = 0;

        memset(onstack, 0, sizeof(onstack));
        memset(indexes, -1, sizeof(indexes));
        memset(lowlink, -1, sizeof(lowlink));

        while (m--) {
            std::cin >> v >> w >> p;

            graph[v].push_back(w);
            if (p == 2) {
                graph[w].push_back(v);
            }
        }

        tarjan();
        if (scc.size() == 1) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }

        graph.clear();
        scc.clear();
    }

    return 0;
}
