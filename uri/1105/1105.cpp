#include <iostream>
 
using namespace std;

struct Bank{
    int owe_to;
    int owe_value;
    int reserve;
};
 
int main(){
    int r, b, n, i, d, c, v;
    bool liquidated;
 
    while (cin >> b >> n && b != 0 && n != 0){
        Bank banks[b + 1];
        liquidated = true;
 
        for (i = 1; i <= b; i++){
            cin >> r;

            Bank bank;
            bank.reserve = r;
            banks[i] = bank;
        }

        while (n--){
            cin >> d >> c >> v;

            banks[d].owe_to = c;
            banks[d].owe_value = v;

            banks[c].reserve += v;
            banks[d].reserve -= v;
            banks[d].owe_value -= v;
        }

        for (i = 1; i <= b; i++){
            if (banks[i].reserve < 0) {
                liquidated = false;
                break;
            }
        }

        if (liquidated) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
