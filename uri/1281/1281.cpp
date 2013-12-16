#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){
    int n, p, q, quantity;
    string fruit;
    double price, result;
    map<string, double> prices;

    cin >> n;
    while (n--){
        result = 0.0;
        prices.clear();

        cin >> p;
        while (p--){
            cin >> fruit >> price;
            prices[fruit] = price;
        }

        cin >> q;
        while (q--){
            cin >> fruit >> quantity;
            result += prices[fruit] * quantity;
        }

        printf("R$ %.2lf\n", result);
    }
    return 0;
}
