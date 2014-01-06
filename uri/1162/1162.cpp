#include <iostream>

using namespace std;

int main(){
    int i, j, x, n, l, swap;
    bool swapped;

    cin >> n;
    while (n--){
        cin >> l;
        swap = 0;

        int train[l];

        for (i = 0; i < l; i++){
            cin >> train[i];
        }

        for (i = l - 1; i >= 0; i--){
            swapped = false;
            for (j = 0; j < i; j++){
                if (train[j] > train[j + 1]){
                    x = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = x;
                    swap++;
                    swapped = true;
                }
            }

            if (!swapped) break;
        }

        cout << "Optimal train swapping takes " << swap << " swaps." << endl;

    }
    return 0;
}
