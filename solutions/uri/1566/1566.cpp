#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <vector>

int main() {
    int32_t nc, n, h;
    std::vector< int32_t > heights;
    std::vector< int32_t >::iterator it;

    scanf("%d", &nc);

    while (nc--) {
        scanf("%d", &n);

        while (n--) {
            scanf("%d", &h);
            heights.push_back(h);
        }

        std::sort(heights.begin(), heights.end());

        it = heights.begin();
        printf("%d", *it);
        it++;
        for (; it != heights.end(); it++) {
            printf(" %d", *it);
        }
        printf("\n");

        heights.clear();
    }

    return 0;
}
