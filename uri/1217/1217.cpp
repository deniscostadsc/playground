#include <cstdio>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n, c;
    double p, prices, k, kilos = 0;
    string s;

    cin >> n;
    c = 0;
    while (++c <= n){
        cin >> p;
        prices += p;
        getline(cin, s); // it's hack!!!
        getline(cin, s);
        k = count(s.begin(), s.end(), ' ') + 1;
        cout << "day " << c << ": " << k << " kg" << endl;
        kilos += k;
    }

    printf("%.2F kg by day\n", kilos / n);
    printf("R$ %.2F by day\n", prices / n);

    return 0;
}
