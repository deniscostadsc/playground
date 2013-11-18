#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;

    for (a = 1; a < 500; a++){
        for (b = a + 1; b < 500; b++){
            c = sqrt(a * a + b * b);
            if (sqrt(a * a + b * b) == c && a + b + c == 1000){
                cout << a * b * c << endl;
                break;
            }
        }
    }

    return 0;
}
