#include <iostream>
#include <vector>

int
    main() {
    int i, j, k, n, arc, triangles, len;

    while (std::cin >> n) {
        std::vector< int > sum;

        for (i = 0; i < n; i++) {
            std::cin >> arc;
            sum.push_back(i == 0 ? arc : sum[i - 1] + arc);
        }

        triangles = 0;
        len = sum[n - 1] / 3;
        j = k = 0;

        for (i = 0; sum[i] + 2 * len <= sum[n - 1]; i++) {
            while (sum[j] < sum[i] + len)
                j++;
            while (sum[k] < sum[i] + 2 * len)
                k++;

            if (sum[j] == sum[i] + len && sum[k] == sum[i] + 2 * len) {
                triangles++;
            }
        }

        std::cout << triangles << std::endl;
    }

    return 0;
}
