#include <iostream>

using namespace std;

int main(){
    unsigned int i;
    int n, c;
    string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;

    cin >> n;
    while (n--){
        cin >> s;
        cin >> c;

        for (i = 0; i <= s.length() - 1; i++) s.at(i) = a.at(a.find_last_of(s.at(i)) - c);
        cout << s << endl;
    }
    return 0;
}
