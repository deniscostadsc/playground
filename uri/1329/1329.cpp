#include <iostream>

using namespace std;

int main(){
    int n, c, m, j;

    while (cin >> n){
        m = 0;
        j = 0;

        if (n == 0) break;

        while (n--){
            cin >> c;

            if (c == 0) m++;
            else j++;
        }

        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }

    return 0;
}
