#include <cstdint>
#include <iostream>
#include <map>

struct Pair {
    std::int64_t next;
    std::uint64_t length;
};

std::map< std::uint64_t, Pair > acks;

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
    std::int64_t i, g_number;
    std::uint64_t g_sequence;

    acks[1].next = 1;
    acks[1].length = 1;

    g_sequence = 0;

    for (i = 2; i < 1000000; i++) {
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

    std::cout << g_number << std::endl;

    return 0;
}
