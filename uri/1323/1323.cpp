#include <iostream>

using namespace std;

int main(){
    int n, i, sum;

    while (cin >> n && n != 0){
        sum = 0;
        for (i = 1; i <= n; i++){
            sum += i * i;
        }
        cout << sum << endl;
    }
    return 0;
}
