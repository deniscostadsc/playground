#include <cstdint>
#include <iostream>
#include <queue>
#include <string>
#include <tuple>
#include <vector>

struct Comparator {
    bool operator()(
        const std::tuple< int, int, int, std::string > &a,
        const std::tuple< int, int, int, std::string > &b) const {
        if (std::get< 0 >(a) != std::get< 0 >(b))
            return std::get< 0 >(a) < std::get< 0 >(b);
        if (std::get< 1 >(a) != std::get< 1 >(b))
            return std::get< 1 >(a) < std::get< 1 >(b);
        if (std::get< 2 >(a) != std::get< 2 >(b))
            return std::get< 2 >(a) < std::get< 2 >(b);
        return std::get< 3 >(a) > std::get< 3 >(b);
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, gold, silver, bronze;
    std::string country;
    std::priority_queue<
        std::tuple< int, int, int, std::string >,
        std::vector< std::tuple< int, int, int, std::string > >,
        Comparator >
        pq;

    std::cin >> n;

    for (int16_t i = 0; i < n; i++) {
        std::cin >> country >> gold >> silver >> bronze;
        pq.push({gold, silver, bronze, country});
    }

    for (int16_t i = 0; i < n; i++) {
        auto medals = pq.top();
        pq.pop();

        std::cout << std::get< 3 >(medals) << " " << std::get< 0 >(medals)
                  << " " << std::get< 1 >(medals) << " "
                  << std::get< 2 >(medals) << '\n';
    }

    return 0;
}
