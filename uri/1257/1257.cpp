#include <iostream>

using namespace std;

int main(){
    int n, l, current, sum;
    unsigned int i;
    string word, alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> n;
    while (n--){
        cin >> l;
        current = -1;
        sum = 0;

        while (++current < l){
            cin >> word;
            for (i = 0; i < word.size(); i++){
                sum += alphabet.find_first_of(word.at(i)) + current + i;
            }
        }

        cout << sum << endl;
    }
    return 0;
}
