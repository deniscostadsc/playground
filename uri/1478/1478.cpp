#include <iostream>

using namespace std;

int main(){
    int n, i, j, p, np;
    bool c;

    while (cin >> n){

        if (n == 0) break;

        p = 1;

        for (i = 1; i <= n; i++){
            np = p;
            c = false;

            for (j = 0; j < n; j++){
                if (j == 0){
                    if (np < 10) cout << "  ";
                    else if (np < 100) cout << " ";
                } else {
                    if (np < 10) cout << "   ";
                    else if (np < 100) cout << "  ";
                    else cout << " ";
                }

                cout << np;

                if (np == 1) c = true;

                if (c) np++;
                else np--;
            }
            p++;

            cout << endl;
        }

        cout << endl;
    }
    return 0;
}
