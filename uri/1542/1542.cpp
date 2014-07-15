#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int q, d, p;

    while(cin >> q && q){
        cin >> d >> p;
        int answer = trunc((double)(q * d) / -(q - p) * p);

        if (answer == 1) cout << answer << " pagina" << endl;
        else cout << answer << " paginas" << endl;
    }

    return 0;
}
