#include <iostream>

using namespace std;

int main(){
    unsigned int i, n, l;
    string a, b;

    cin >> n;
    while (n--){
        cin >> a >> b;
        if (a.length() < b.length()) l = a.length();
        else l = b.length();

        for (i = 0; i < l; i++) cout << a.at(i) << b.at(i);

        if (a.length() > l){
            for (i = l; i < a.length(); i++) cout << a.at(i);
        }

        if (b.length() > l){
            for (i = l; i < b.length(); i++) cout << b.at(i);
        }

        cout << endl;
    }
    return 0;
}
