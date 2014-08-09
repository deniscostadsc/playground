#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, qt, s, g, i, lowest_sub, best_guesser;

    cin >> n;

    while (n--){
        cin >> qt >> s;
        cin >> g;

        lowest_sub = abs(g - s);
        best_guesser = 1;

        i = 1;
        while (i++ < qt){
            cin >> g;

            if (abs(g - s) < lowest_sub){
                lowest_sub = abs(g - s);
                best_guesser = i;
            }
        }
        cout << best_guesser << endl;
    }

    return 0;
}
