#include <iostream>
#include <map>

struct Pair {
    long next;
    unsigned long length;
};

std::map< unsigned long, Pair > acks;

long ack(long n) {
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
    long l, h, i, g_number, x;
    unsigned long g_sequence;

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
