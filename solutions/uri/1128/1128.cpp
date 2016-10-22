#include <cstring>
#include <iostream>
#include <map>
#include <stack>
#include <vector>

int indexes[2001];
int lowlink[2001];
int onstack[2001];
int current_index;

std::map<int, std::vector<int> > graph;
std::map<int, std::vector<int> > scc;
std::stack<int> s;

void dfs_tarjan(int v) {
    std::vector<int>::iterator v_it;
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
        int w;

        do {
            w = s.top();
            s.pop();
            onstack[w] = 0;
            scc[v].push_back(w);
        } while (v != w);
    }
}

void tarjan() {
    std::map<int, std::vector<int> >::iterator m_it;

    for (m_it = graph.begin(); m_it != graph.end(); m_it++) {
        if (indexes[m_it->first] == -1) {
            dfs_tarjan(m_it->first);
        }
    }
}

int main() {
    int n, m, v, w, p;
    std::map<int, std::vector<int> >::iterator m_it;
    std::vector<int>::iterator v_it;

    while (std::cin >> n >> m && n && m) {
        current_index = 0;

        memset(onstack, 0, sizeof(onstack));
        memset(indexes, -1, sizeof(indexes));
        memset(lowlink, -1, sizeof(lowlink));

        while (m--) {
            std::cin >> v >> w >> p;

            graph[v].push_back(w);
            if (p == 2) graph[w].push_back(v);
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
