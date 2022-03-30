#include <cstdint>
#include <cstdio>
#include <set>

int main() {
    std::int64_t n, x;
    std::int64_t total_sheeps;
    std::int16_t attacked_stars;
    std::int16_t total_zeros;
    bool done;

    scanf("%lld", &n);
    total_sheeps = 0;
    attacked_stars = 0;
    total_zeros = 0;
    done = false;

    for (std::int16_t i = 0; i < n; i++) {
        scanf("%lld", &x);
        total_sheeps += x;

        if (!done) {
            attacked_stars++;
        }

        if (x && !done) {
            if (x % 2 == 0 && i == 0) {
                total_sheeps--;
                done = true;
            } else if (x % 2 == 1) {
                total_sheeps--;
                if (x == 1) {
                    total_zeros++;
                }
            } else {
                total_sheeps -= i + 1 - total_zeros;
                done = true;
            }
        } else {
            done = true;
        }
    }

    printf("%d %lld\n", attacked_stars, total_sheeps);

    return 0;
}
