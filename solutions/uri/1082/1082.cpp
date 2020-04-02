#include <cstdio>
#include <string>

int graph[26][26];
int discovered[26];

void dfs(int vertex, int v, int cc) {
    int i;

    discovered[vertex] = cc;

    for (i = 0; i < v; i++) {
        if (graph[vertex][i] == 1 && !discovered[i]) {
            dfs(i, v, cc);
        }
    }
}

int count_connected_components(int v) {
    int i, index = 0, cc = 0;

    while (true) {
        cc++;
        dfs(index, v, cc);
        index = -1;

        for (i = 0; i < v; i++) {
            if (!discovered[i]) {
                index = i;
                break;
            }
        }

        if (index == -1) break;
    }

    return cc;
}

int main() {
    int i, j, n, v, e, cc, tcase = 0;
    char from, to;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    scanf("%d", &n);

    while (tcase++ < n) {
        scanf("%d %d ", &v, &e);

        for (i = 0; i < v; i++) {
            for (j = 0; j < v; j++) {
                graph[i][j] = 0;
            }
            discovered[i] = 0;
        }

        while (e--) {
            scanf("%c %c ", &from, &to);

            i = static_cast<int>(alphabet.find_first_of(from));
            j = static_cast<int>(alphabet.find_first_of(to));
            graph[i][j] = 1;
            graph[j][i] = 1;
        }


        cc = count_connected_components(v);
        printf("Case #%d:\n", tcase);
        for (i = 1; i <= cc; i++) {
            for (j = 0; j < v; j++) {
                if (discovered[j] == i) {
                    printf("%c,", alphabet[j]);
                }
            }
            puts("");
        }
        printf("%d connected components\n\n", cc);
    }

    return 0;
}
