#include <cstdint>
#include <cstdio>
#include <string>

int32_t graph[26][26];
int32_t discovered[26];

void dfs(int32_t vertex, int32_t v, int32_t cc) {
    int32_t i;

    discovered[vertex] = cc;

    for (i = 0; i < v; i++) {
        if (graph[vertex][i] == 1 && !discovered[i]) {
            dfs(i, v, cc);
        }
    }
}

int32_t count_connected_components(int32_t v) {
    int32_t i, index = 0, cc = 0;

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

        if (index == -1) {
            break;
        }
    }

    return cc;
}

int main() {
    int32_t i, j, n, v, e, cc, tcase = 0;
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

            i = static_cast< int32_t >(alphabet.find_first_of(from));
            j = static_cast< int32_t >(alphabet.find_first_of(to));
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
