#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, i, l;
    string s;
    cin >> n;

    getline(cin, s); // It's a hack

    while (n--){
        getline(cin, s);
        l = s.length();
        for (i = l / 2 - 1; i >= 0; i--) cout << s.at(i);
        for (i = l - 1; i > l / 2 - 1; i--) cout << s.at(i);
        cout << endl;
    }
    return 0;
}
