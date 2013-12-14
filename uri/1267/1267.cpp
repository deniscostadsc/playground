#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int i, j, x, y, n;
    bool p;

    while (cin >> x >> y && x != 0 && y != 0){
        int m[x];

        for (int k = 0; k < x; k++) m[k] = 1;

        for (i = 0; i < y; i++){
            for (j = 0; j < x; j++){
                cin >> n;
                if (!m[j] || !n){
                    m[j] = 0;
                }
            }
        }

        p = false;
        for (i = 0; i < x; i++){
            if (m[i]){
                cout << "yes" << endl;
                p = true;
                break;
            }
        }

        if (!p) cout << "no" << endl;
    }

    return 0;
}
