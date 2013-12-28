#include <iostream>

using namespace std;

int main(){
    int m, f, c = 0;
    string s, l, cs, g;

    while (cin >> s){
        m = 0;
        f = 0;
        getline(cin, l); // it's a hack
        getline(cin, l);

        if (c) cout << endl;

        for (size_t i = 0; i < l.length(); i += 5){
            if (s.at(0) == l.at(i) && s.at(1) == l.at(i + 1)){
                if (l.at(i + 3) == 'M') m++;
                else f++;
            }
        }

        cout << "Caso " << ++c << ":" << endl;
        cout << "Pares Iguais: " << m + f << endl;
        cout << "F: " << f << endl;
        cout << "M: " << m << endl;
    }
    return 0;
}
