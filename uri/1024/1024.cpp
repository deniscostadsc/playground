#include <iostream>
// #include <cstdio>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    getline(cin, s); // it's a hack

    while(n--){
        getline(cin, s);

        string r(s.rbegin(), s.rend());  // reverse string

        unsigned int l = r.length();

        for (unsigned int i = 0; i < s.length(); ++i){
            if ((r.at(i) >= 65 && r.at(i) <= 90) || (r.at(i) >= 97 && r.at(i) <= 122)){
                r.at(i) = r.at(i) + 3;
            }
            if (i >= l / 2){
                r.at(i) = r.at(i) - 1;
            }
        }

        cout << r << endl;
    }

    return 0;
}
