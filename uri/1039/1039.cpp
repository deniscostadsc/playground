#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double r1, x1, y1, r2, x2, y2;
    double distance;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
        if (r1 >= distance + r2) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }

    return 0;
}
