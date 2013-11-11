#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, d;

    while (cin >> a >> b >> c){
        d = sqrt(12 * 12 + a * a);

        if (12 / b >= d / c) cout << "S" << endl;
        else cout << "N" << endl;
    }

    return 0;
}
