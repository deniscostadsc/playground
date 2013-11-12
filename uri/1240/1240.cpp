#include <iostream>

using namespace std;

int main(){
    int n, i, la;
    string a, b;
    bool e;

    cin >> n;
    while (n--){
        cin >> a >> b;

        e = true;

        if (b.length() > a.length()){
            e = false;
        } else {
            la = a.length() - 1;
            for (i = b.length() - 1; i >= 0; i--){
                if (b.at(i) != a.at(la)){
                    e = false;
                    break;
                }
                la--;
            }
        }
        if (e) cout << "encaixa" << endl;
        else cout << "nao encaixa" << endl;
    }
    return 0;
}
