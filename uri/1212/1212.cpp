#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int c, temp, index, result[12];
    unsigned int i, size_a, size_b;
    string a, b;

    while (cin >> a >> b){
        if (a == "0" && b == "0") break;

        memset(result, 0, sizeof(result));
        size_a = a.size();
        size_b = b.size();
        index = 11;
        c = 0;

        unsigned int k = (size_a > size_b ? size_a : size_b);
        for (i = 0; i < k; i++){
            temp = 0;
            if (size_a >= 1) temp += (a.at(--size_a) - '0');
            if (size_b >= 1) temp += (b.at(--size_b) - '0');

            if (result[index] + temp > 9){
                result[index - 1] = 1;
                c++;
            }
            result[index] += temp % 10;
            index--;
        }
        if (c == 0) cout << "No carry operation." << endl;
        else if (c == 1) cout << "1 carry operation." << endl;
        else cout << c << " carry operations." << endl;
    }

    return 0;
}
