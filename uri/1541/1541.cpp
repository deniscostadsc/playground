#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    while (cin >> a && a){
        cin >> b >> c;

        double minimun_land_size = (100 * a * b) / c;

        cout << floor(sqrt(minimun_land_size)) << endl;
    }

    return 0;
}
