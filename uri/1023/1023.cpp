#include <iostream>
#include <iomanip>
#include <map>
#include <cmath>

using namespace std;

map<int, int> r;

int main(){
    int n, nn = 0, x, y, s, c;
    double xs, ys;
    bool first = true;

    while (cin >> n && n != 0){
        if (!first) {
            cout << endl;
        }
        first = false;

        xs = 0.0;
        ys = 0.0;
        nn++;

        r.clear();

        while (n--){
            cin >> x >> y;
            ys += y;
            xs += x;

            if (r[y / x] != 0) r[y / x] += x;
            else r[y / x] = x;
        }

        s = r.size();
        c = 0;

        cout << "Cidade# " << nn << ":" << endl;
        for(map<int, int>::iterator iter = r.begin(); iter != r.end(); iter++){
            cout << iter->second << "-" << iter->first;
            if (c < s - 1) cout << " ";
            c++;
        }

        cout << endl;
        cout << "Consumo medio: ";
        cout << fixed << setprecision(2) << floor((ys / xs) * 100) / 100;
        cout << " m3." << endl;
    }
    return 0;
}
