#include <iostream>

using namespace std;

int main(){
    string s;
    int n;
    unsigned int i;
    bool first;

    cin >> n;
    getline(cin, s);  // it's a hack
    while (n--){
        getline(cin, s);
        first = false;
        for (i = 0; i < s.length(); i++){
            if (s.at(i) == ' ' && first){
                first = !first;
            }

            if (s.at(i) != ' ' && !first){
                first = !first;
                cout << s.at(i);
            }
        }
        cout << endl;   
    }

    return 0;
}
