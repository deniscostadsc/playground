#include <iostream>

using namespace std;

int main(){
    int a, b;

    while (cin >> a >> b && a && b){
        if (a < b) cout << a - (b - a) << endl;
        else cout << b - (a - b) << endl;
    }

    return 0;
}
