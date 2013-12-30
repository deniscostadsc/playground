#include <iostream>

using namespace std;

int main(){
    bool c;
    int i, n, q;
    double a, p;
    string attendances;

    cin >> n;

    while (n--){

        cin >> q;
        string names[q];

        for (i = 0; i < q; i++){
            cin >> names[i];
        }

        c = false;
        for (i = 0; i < q; i++){
            a = 0;
            p = 0;
            cin >> attendances;
            for (size_t j = 0; j < attendances.length(); j++){
                if (attendances.at(j) == 'A') a++;
                else if (attendances.at(j) == 'P') p++;
            }
            if (a / (a + p) > 0.25){
                if (c) cout << " ";
                cout << names[i];
                c = true;
            }
        }
        cout << endl;
    }
    return 0;
}
