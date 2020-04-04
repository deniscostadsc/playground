#include <iostream>
#include <map>

struct Pair {
    long next;
    unsigned long length;
};

std::map< unsigned long, Pair > acks;

long ack(long n) {
    if (acks[n].next != 0)
        return acks[n].next;

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
    long i, g_number;
    unsigned long g_sequence;

    acks[1].next = 1;
    acks[1].length = 1;

    g_sequence = 0;

    for (i = 2; i < 1000000; i++) {
        ack(i);
        if (acks[i].length > g_sequence) {
            g_sequence = acks[i].length;
            g_number = i;
        } else if (acks[i].length == g_sequence) {
            if (i < g_number)
                g_number = i;
        }
    }

    std::cout << g_number << std::endl;

    return 0;
}
