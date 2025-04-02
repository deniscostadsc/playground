#include <cstdint>
#include <iostream>
#include <set>
#include <string>

int main() {
    int16_t stickers_total_count, stickers_bought_count, sticker;
    std::set< int16_t > stickers_bought_unique;

    std::cin >> stickers_total_count;
    std::cin >> stickers_bought_count;

    while (std::cin >> sticker) {
        stickers_bought_unique.insert(sticker);
    }

    std::cout << stickers_total_count - stickers_bought_unique.size()
              << std::endl;

    return 0;
}
