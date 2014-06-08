#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(){
    int i, j, k, n, initial, current, max_number, length_max_number, length_current, num_spaces;

    while (cin >> n && n){
        initial = 1;

        max_number = pow(2, n + n - 2);

        stringstream out;
        out << max_number;
        length_max_number = out.str().length();

        for (i = 0; i < n; i++){
            current = initial;
            for (j = 0; j < n; j++){
                num_spaces = length_max_number;
                if (j < 1) num_spaces--;

                stringstream out;
                out << current;
                length_current = out.str().length();

                num_spaces -= length_current;
                num_spaces++;

                for (k = 0; k < num_spaces; k++) cout << " ";

                cout << current;
                current *= 2;
            }
            cout << endl;
            initial *= 2;
        }
        cout << endl;
    }

    return 0;
}
