#include <iostream>
#include <map>

using namespace std;

struct Pair {
    unsigned long next;
    unsigned long length;
};

map<unsigned long, Pair> acks;

long long ack(long long n){
    if (acks[n].next != 0) return acks[n].next;

    if (n % 2 == 0) acks[n].next = n / 2;
    else acks[n].next = 3 * n + 1;

    ack(acks[n].next);

    acks[n].length = acks[acks[n].next].length + 1;
    return acks[n].next;
}

int main(){
    long long i, g_number, g_sequence;

    acks[1].next = 1;

    g_sequence = 0;

    for (i = 2; i < 1000000; i++){
        ack(i);
        if (acks[i].length > g_sequence){
            g_sequence = acks[i].length;
            g_number = i;
        } else if (acks[i].length == g_sequence){
            if (i < g_number) g_number = i;
        }
    }

    cout << g_number << endl;

    return 0;
}
