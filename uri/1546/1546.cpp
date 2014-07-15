#include <iostream>

using namespace std;

int main(){
    int n, d, f;

    cin >> n;
    while (n--){
        cin >> d;
        while (d--){
            cin >> f;
            if (f == 1) cout << "Rolien" << endl;
            else if (f == 2) cout << "Naej" << endl;
            else if (f == 3) cout << "Elehcim" << endl;
            else cout << "Odranoel" << endl;
        }
    }
    return 0;
}
