#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, t, q, x1, y1, x2, y2;

    cin >> n;
    while (n--){
        cin >> t;
        cin >> q;
        while (t--){
            cin >> x1 >> y1 >> x2 >> y2;
            if ((x1 + y1) % 2 == (x2 + y2) % 2){
                if (x1 == x2 && y1 == y2) cout << "0" << endl;
                else if (abs(x1 - x2) == abs(y1 - y2)) cout << "1" << endl;
                else cout << "2" << endl;
            } else cout << "no move" << endl;
        }

    }

    return 0;
}
