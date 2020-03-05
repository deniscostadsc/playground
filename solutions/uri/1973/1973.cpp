#include <cstdio>
//#include <iostream>
#include <set>

int main() {
    long long n, x;
    long long total_sheeps;
    int attacked_stars;
    int total_zeros;
    bool done;

    //std::cin >> n;
    scanf("%lld", &n);
    total_sheeps = 0;
    attacked_stars = 0;
    total_zeros = 0;
    done = false;

    for (int i = 0; i < n; i++) {
        //std::cin >> x;
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

    //std::cout << attacked_stars << " " << total_sheeps << std::endl;
    printf("%d %lld\n", attacked_stars, total_sheeps);

    return 0;
}
