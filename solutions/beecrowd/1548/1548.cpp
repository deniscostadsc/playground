#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <vector>

int main() {
    std::int32_t n, m, p, count;
    std::vector< std::int32_t > queue;
    std::vector< std::int32_t >::iterator it, it_copy;

    scanf("%d", &n);

    while (n--) {
        count = 0;

        scanf("%d", &m);

        while (m--) {
            scanf("%d", &p);
            queue.insert(queue.begin(), p);
        }

        std::vector< std::int32_t > queue_copy(queue);
        sort(queue_copy.begin(), queue_copy.end());

        it_copy = queue_copy.begin();
        for (it = queue.begin(); it != queue.end(); ++it) {
            if (*it == *it_copy) {
                count++;
            }

            ++it_copy;
        }

        printf("%d\n", count);

        queue.clear();
    }

    return 0;
}
