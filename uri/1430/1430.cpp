#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int i, count, acum;
    string jingle;

    map<char, int> duration;
    duration['W'] = 64;
    duration['H'] = 32;
    duration['Q'] = 16;
    duration['E'] = 8;
    duration['S'] = 4;
    duration['T'] = 2;
    duration['X'] = 1;

    while (getline(cin, jingle) && jingle != "*") {
        count = 0;
        acum = 0;

        for (i = 0; i < (int)jingle.size(); i++) {
            if (jingle[i] == '/'){
                if (acum == 64) count++;
                acum = 0;
            } else {
                acum += duration[jingle[i]];
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
