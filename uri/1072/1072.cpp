#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int c, n, i = 0, o = 0;
    cin >> c;
    while (c--){
        cin >> n;
        if (n > 9 && n < 21)
            i++;
        else
            o++;
    }

    cout << i << " in" << endl;
    cout << o << " out" << endl;
    return 0;
}
