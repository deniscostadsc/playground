#include <iostream>

using namespace std;

int main(){
    int n, a, b, ac, bc;
    while (cin >> n && n != 0){
        ac = 0;
        bc = 0;
        while (n--){
            cin >> a >> b;
            if (a > b)
                ac++;
            if (b > a)
                bc++;
        }
        cout << ac << " " << bc << endl;
    }
    return 0;
}
