#include <iostream>
#include <set>

using namespace std;

set<string> matches;

int brute_force(string sequence) {
    int i;

    if (sequence.size() == 0) return 0;

    matches.insert(matches.begin(), sequence);
    
    for (i = 0; i < (int) sequence.size(); i++) {
        string ggg (sequence.begin(), sequence.end());
        ggg.erase(ggg.begin() + i);
        brute_force(ggg);
    }

    return 1;
}

int main() {
    string sequence;

    while (cin >> sequence) {
        brute_force(sequence);

        for (set<string>::iterator it = matches.begin();
             it != matches.end(); it++) {
            cout << *it << endl;
        }

        cout << endl;

        matches.clear();
    }

    return 0;
}
