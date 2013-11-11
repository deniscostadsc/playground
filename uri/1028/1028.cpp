#include <iostream>

using namespace std;

int gcd(int a, int b){
    int x;
    while (b > 0){
        x = b;
        b = a % b;
        a = x;
    }
    return a;
}

int main(){
    int n, a, b;

    cin >> n;

    while (n--){
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }

    return 0;
}
