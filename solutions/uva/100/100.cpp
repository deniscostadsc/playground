#include <cstdint>
#include <iostream>
#include <map>

struct Pair {
    std::int32_t next;
    std::int32_t length;
};

std::map< std::int32_t, Pair > acks;

std::int32_t ack(std::int32_t n) {
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
    std::int32_t l, h, low, high;
    std::int32_t g_sequence;

    acks[1].next = 1;
    acks[1].length = 1;

    while (std::cin >> l >> h && l && h) {
        low = l;
        high = h;
        if (h < l) {
            low = h;
            high = l;
        }

        g_sequence = 0;

        for (std::int32_t i = low; i <= high; i++) {
            ack(i);
            if (acks[i].length > g_sequence) {
                g_sequence = acks[i].length;
            }
        }

        std::cout << l << " " << h << " " << g_sequence << std::endl;
    }

    return 0;
}
