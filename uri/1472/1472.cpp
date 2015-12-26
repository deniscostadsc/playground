#include <cstdio>

using namespace std;

int main() {
    int i, j, k, n, arc, triangles, len;

    while (scanf("%d", &n) != EOF) {
        int sum[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &arc);
            sum[i] = i == 0 ? arc : sum[i - 1] + arc;
        }
        
        triangles = 0;
        len = sum[n]/3;
        j = k = 0;

        for (i = 0; sum[i] + 2 * len <= sum[n - 1]; i++) {
            while ( sum[j] < sum[i] + len ) j++;
            while ( sum[k] < sum[i] + 2 * len ) k++;

            if ( sum[j] == sum[i] + len && sum[k] == sum[i] + 2 * len ) {
                triangles++;
            }
        }

        printf("%d\n", triangles);
    }

    return 0;
}
