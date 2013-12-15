#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int c;
    unsigned int i;
    bool begin, match;
    int previous_letter, current_letter;
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string line;

    while (getline(cin, line)){
        c = 0;
        match = false;

        if (lower.find_first_of(line.at(0)) != string::npos){
            previous_letter = lower.find_first_of(line.at(0));
        } else {
            previous_letter = upper.find_first_of(line.at(0));
        }

        begin = false;
        for (i = 1; i < line.size(); i++){
            if (line.at(i) == ' '){
                begin = true;
                continue;
            }

            if (begin){
                if (lower.find_first_of(line.at(i)) != string::npos){
                    current_letter = lower.find_first_of(line.at(i));
                } else {
                    current_letter = upper.find_first_of(line.at(i));
                }

                if (current_letter == previous_letter && !match){
                    c++;
                    match = true;
                } else if (current_letter == previous_letter){
                    match = true;
                } else {
                    match = false;
                }

                previous_letter = current_letter;
            }

            begin = false;
        }
        cout << c << endl;
    }
    return 0;
}
