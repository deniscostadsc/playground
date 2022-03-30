#include <cstdint>
#include <iostream>
#include <map>

struct Pair {
    std::int64_t next;
    std::uint32_t length;
};

std::map< std::uint32_t, Pair > acks;

std::int64_t ack(std::int64_t n) {
    if (acks[n].next != 0) {
        return acks[n].next;
    }

    if (n % 2 == 0) {
        acks[n].next = n / 2;
    } else {
        acks[n].next = 3 * n + 1;
    }

    ack(acks[n].next);

    acks[n].length = acks[acks[n].next].length + 1;
    return acks[n].next;
}

int main() {
    std::int64_t l, h, i, g_number, x;
    std::uint32_t g_sequence;

    acks[1].next = 1;
    acks[1].length = 0;

    while (std::cin >> l >> h && l && h) {
        if (h < l) {
            x = l;
            l = h;
            h = x;
        }

        g_sequence = 0;

        if (l == 1) {
            g_sequence = 3;
            g_number = 1;
        }

        for (i = l; i <= h; i++) {
            ack(i);
            if (acks[i].length > g_sequence) {
                g_sequence = acks[i].length;
                g_number = i;
            } else if (acks[i].length == g_sequence) {
                if (i < g_number) {
                    g_number = i;
                }
            }
        }

        std::cout << "Between " << l << " and " << h << ", " << g_number;
        std::cout << " generates the longest sequence of " << g_sequence;
        std::cout << " values." << std::endl;
    }

    return 0;
}
