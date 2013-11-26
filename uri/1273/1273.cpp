#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    unsigned int i, g;
    int n;
    string s;
    bool newline = false;

    while (cin >> n && n != 0){
        if (newline) cout << endl;
        else newline = !newline;

        g = 0;
        vector<string> ss;
        while (n--){
            cin >> s;
            if (s.length() > g) g = s.length();
            ss.push_back(s);
        }

        for (i = 0; i < ss.size(); i++){
            cout << setw(g);
            cout << ss[i] << endl;
        }
    }

    return 0;
}
