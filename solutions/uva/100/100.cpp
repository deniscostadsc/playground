#include <iostream>
#include <map>

struct Pair {
    long next;
    long length;
};

std::map< long, Pair > acks;

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
    long l, h, low, high;
    long g_sequence;

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

        for (int i = low; i <= high; i++) {
            ack(i);
            if (acks[i].length > g_sequence) {
                g_sequence = acks[i].length;
            }
        }

        std::cout << l << " " << h << " " << g_sequence << std::endl;
    }

    return 0;
}
