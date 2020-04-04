#include <cstdio>
#include <iostream>
#include <string>

int graph[20][20];
bool discovered[20];

bool dfs(int vertex, int v, int spaces) {
    int i;
    bool has_path = false;

    discovered[vertex] = true;

    for (i = 0; i < v; i++) {
        if (graph[vertex][i] == 1) {
            has_path = true;
            if (!discovered[i]) {
                std::cout << std::string(spaces, ' ');
                printf("%d-%d pathR(G,%d)\n", vertex, i, i);
                dfs(i, v, spaces + 2);
            } else {
                std::cout << std::string(spaces, ' ');
                printf("%d-%d\n", vertex, i);
            }
        }
    }

    return has_path;
}

void dfs_runner(int v) {
    int i, index = 0;

    while (true) {
        if (dfs(index, v, 2))
            puts("");

        index = -1;

        for (i = 0; i < v; i++) {
            if (!discovered[i]) {
                index = i;
                break;
            }
        }

        if (index == -1)
            break;
    }
}

int main() {
    int i, j, n, v, e, from, to, ncase = 0;

    scanf("%d", &n);

    while (ncase++ < n) {
        scanf("%d %d", &v, &e);

        for (i = 0; i < v; i++) {
            for (j = 0; j < v; j++) {
                graph[i][j] = 0;
            }
            discovered[i] = false;
        }

        while (e--) {
            scanf("%d %d", &from, &to);

            graph[from][to] = 1;
        }

        printf("Caso %d:\n", ncase);
        dfs_runner(v);
    }
    return 0;
}
