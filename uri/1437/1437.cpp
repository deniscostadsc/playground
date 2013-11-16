#include <iostream>

using namespace std;

int main(){
    unsigned int i, n;
    int q;
    string c;
    string d = "NLSO";

    while (cin >> n && n != 0){
        cin >> c;
        q = 0;
        for (i = 0; i < c.size(); i++){
            if (c.at(i) == 'D') q++;
            else q--;

            if (q == 4) q = 0;
            if (q == -1) q = 3;
        }
        cout << d.at(q) << endl;
    }

    return 0;
}
