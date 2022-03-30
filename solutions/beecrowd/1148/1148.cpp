#include <cstdint>
#include <cstdio>

#define _INFINITY 1 << 30

std::int32_t matrix[501][501];

std::int32_t dijkstra(std::int32_t source, std::int32_t destiny, std::int32_t n) {
    std::int32_t shortest_distance, next_vertex, i, j;
    std::int32_t distance[n];
    bool correct[n];

    for (i = 1; i <= n; i++) {
        distance[i] = _INFINITY;
        correct[i] = false;
    }

    distance[source] = 0;

    for (i = 1; i <= n; i++) {
        shortest_distance = _INFINITY;

        if (correct[destiny]) {
            break;
        }

        for (j = 1; j <= n; j++) {
            if (distance[j] < shortest_distance && !correct[j]) {
                shortest_distance = distance[j];
                next_vertex = j;
            }
        }

        if (shortest_distance == _INFINITY) {
            break;
        }

        correct[next_vertex] = true;

        for (j = 1; j <= n; j++) {
            if (shortest_distance + matrix[next_vertex][j] < distance[j]) {
                distance[j] = shortest_distance + matrix[next_vertex][j];
            }
        }
    }

    return distance[destiny];
}

std::int32_t main() {
    std::int32_t n, e, x, y, h, k, o, d, i, j, result;

    while (scanf("%d %d", &n, &e) && n) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                matrix[i][j] = _INFINITY;
            }
        }

        while (e--) {
            scanf("%d %d %d", &x, &y, &h);
            matrix[x][y] = h;
            if (matrix[y][x] != _INFINITY) {
                matrix[y][x] = 0;
                matrix[x][y] = 0;
            }
        }

        scanf("%d", &k);

        while (k--) {
            scanf("%d %d", &o, &d);
            result = dijkstra(o, d, n);
            if (result == _INFINITY) {
                puts("Nao e possivel entregar a carta");
            } else {
                printf("%d\n", result);
            }
        }

        puts("");
    }

    return 0;
}
