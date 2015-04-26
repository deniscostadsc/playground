#include <iostream>

using namespace std;

int main(){
    unsigned int n, l, c, lines, characters;
    string word;

    while (cin >> n >> l >> c){
        lines = 0;
        characters = 0;
        while (n--){
            cin >> word;
            if (characters + word.length() < c){
                characters += word.length() + 1;
                // if (n == 1) lines++;
            } else {
                characters = word.length() + 1;
                lines++;
            }
        }
        // cout << lines << " + + "<<endl;
        if (lines % l != 0) cout << lines / l + 1 << endl;
        else cout << lines / l << endl;
    }
    return 0;
}
