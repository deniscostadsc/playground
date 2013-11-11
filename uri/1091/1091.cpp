#include <iostream>

using namespace std;

int main(){
    int n, x, y, xc, yc;

    while (cin >> n && n != 0){
        cin >> x >> y;
        while (n--){
            cin >> xc >> yc;
            if (xc > x && yc > y) cout << "NE" << endl;
            else if (xc < x && yc > y) cout << "NO" << endl;
            else if (xc < x && yc < y) cout << "SO" << endl;
            else if (xc > x && yc < y) cout << "SE" << endl;
            else cout << "divisa" << endl;
        }
    }
    return 0;
}
