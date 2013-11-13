#include <iostream>
#include <string>

using namespace std;

int main(){
    unsigned int i;
    string l = "abcdefghijklmnopqrstuvwxyz";
    string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str;
    bool up;

    while (getline(cin, str)){
        up = true;

        for (i = 0; i < str.length(); i++){
            if (str.at(i) == ' '){
                cout << " ";
                continue;
            }
            
            if (up){
                if (l.find_first_of(str.at(i)) != string::npos){
                    cout << u.at(l.find_first_of(str.at(i)));
                } else cout << u.at(u.find_first_of(str.at(i)));
            } else {
                if (u.find_first_of(str.at(i)) != string::npos){
                    cout << l.at(u.find_first_of(str.at(i)));
                } else cout << l.at(l.find_first_of(str.at(i)));
            }

            up = !up;
        }
        cout << endl;
    }

    return 0;
}
