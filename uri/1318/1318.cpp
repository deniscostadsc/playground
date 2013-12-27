#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int t, p, ticket, c;

    while (cin >> t >> p && t != 0 && p != 0){
        c = 0;
        int tickets[t + 1];

        memset(tickets, 0, sizeof(tickets));

        while (p--){
            cin >> ticket;

            if (tickets[ticket] == 1) c++;

            tickets[ticket]++;
        }

        cout << c << endl;
    }
    return 0;
}
