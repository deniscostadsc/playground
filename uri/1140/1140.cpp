#include <iostream>

using namespace std;

int main(){
    int letter, index;
    bool is_tautogram;
    string word;
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (getline(cin, word) && word != "*"){
        is_tautogram = true;

        if (lower.find_first_of(word.at(0)) != string::npos){
            letter = lower.find_first_of(word.at(0));
        } else {
            letter = upper.find_first_of(word.at(0));
        }

        size_t found = 0;
        while (word.find(' ', found) != string::npos){
            found = word.find(' ', found) + 1;
            
            if (lower.find_first_of(word.at(found)) != string::npos){
                index = lower.find_first_of(word.at(found));
            } else {
                index = upper.find_first_of(word.at(found));
            }

            if (letter != index) is_tautogram = false;
        }

        if (is_tautogram) cout << "Y" << endl;
        else cout << "N" << endl;

    }
    return 0;
}
