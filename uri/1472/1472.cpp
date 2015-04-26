#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int i, j, n, circumference, arc,
        triangle_side, count, triangles;
    vector<int> arcs;

    while (scanf("%d", &n) != EOF) {
        circumference = 0;
        triangles = 0;

        while (n--) {
            scanf("%d", &arc);
            circumference += arc;

            arcs.insert(arcs.end(), arc);
        }
        
        for (i = 0; i < (int)arcs.size() / 3 + 1; i++) {
            triangle_side = arcs[i];
            count = 0;
            for (j = 1; j < (int)arcs.size(); j++) {
                if (i + j >= (int)arcs.size()) {
                    triangle_side += arcs[(i + j) % (int)arcs.size()];
                } else {
                    triangle_side += arcs[i + j];
                }

                if (triangle_side == circumference / 3) {
                    count++;
                    triangle_side = 0;
                } else if (triangle_side > circumference / 3) {
                    triangle_side = 0;
                    break;
                }
            }

            if (count == 3) triangles++;
        }

        printf("%d\n", triangles);
        arcs.clear();
    }

    return 0;
}
