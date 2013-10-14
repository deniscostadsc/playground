#include <iostream>

using namespace std;

int main(){
    int n, r, i, j;
    bool check;

    while(cin >> n >> r){
        int v[r];

        for (i = 0; i < r; i++){
            cin >> v[i];
        }

        if (n == r){
            cout << "*" << endl;
            continue;
        }

        for (i = 1; i <= n; i++){
            check = true;
            for (j = 0; j < r; j++){
                if (v[j] == i){
                    check = false;
                    break;
                }
            }
            if (check)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
