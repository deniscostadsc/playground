#include <cstdint>
#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t n, c, m, sticker, i;
    std::set< std::int16_t > stamped_stickers;
    std::set< std::int16_t > purchased_stickers;
    int16_t missing_stickers;

    while (std::cin >> n >> c >> m) {
        for (i = 0; i < c; i++) {
            std::cin >> sticker;
            stamped_stickers.insert(sticker);
        }

        missing_stickers = stamped_stickers.size();

        for (i = 0; i < m; i++) {
            std::cin >> sticker;
            if (purchased_stickers.find(sticker) == purchased_stickers.end()
                && stamped_stickers.find(sticker) != stamped_stickers.end()) {
                missing_stickers--;
            }
            purchased_stickers.insert(sticker);
        }

        std::cout << missing_stickers << '\n';

        stamped_stickers.clear();
        purchased_stickers.clear();
    }

    return 0;
}
