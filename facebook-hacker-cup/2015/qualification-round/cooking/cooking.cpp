#include <iostream>
#include <cstdio>


using namespace std;

int main() {
    int t, j, k, i = 1;
    string n, lowest, greatest, copy;
    char c;

    cin >> t;

    while (i <= t) {
        cin >> n;
        lowest = n;
        greatest = n;
        copy = n;

        for (j = 0; j < n.size(); j++) {
            for (k = 0; k < n.size(); k++) {
                if (copy[j] != '0' && copy[k] != '0') {
                    c = copy[j];
                    copy[j] = copy[k];
                    copy[k] = c;

                    if (copy < lowest) lowest = copy;
                    if (copy > greatest) greatest = copy;

                    copy = n;
                }
            }
        }
        cout << "Case #" << i << ": " << lowest << " " << greatest << endl;

        i++;
    }

    return 0;
}
