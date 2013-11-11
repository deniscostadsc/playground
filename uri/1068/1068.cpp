#include <iostream>

using namespace std;

int main(){
    int c;
    string s;
    while (cin >> s){
        c = 0;
        for (unsigned int i = 0; i < s.length(); ++i){
            if (s.at(i) == ')') c--;
            else if (s.at(i) == '(') c++;

            if (c < 0) break;
        }
        if (c == 0) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    return 0;
}
