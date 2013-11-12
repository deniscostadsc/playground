#include <iostream>

using namespace std;

int main(){
    int i, n, o[5], c, r;
    char l[] = "ABCDE";

    while (cin >> n && n != 0){
        while (n--){
            cin >> o[0] >> o[1] >> o[2] >> o[3] >> o[4];
            c = 0;
            for (i = 0; i <= 4; i++){
                if (o[i] <= 127){
                    r = i;
                    c++;
                }
            }
            if (c != 1) cout << "*" << endl;
            else cout << l[r] << endl;
        }
    }
}
