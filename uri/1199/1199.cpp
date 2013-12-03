#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

string dec2hex(unsigned int n){
    string chars = "0123456789ABCDEF";

    unsigned int i = n % 16;

    if (n / 16 > 0) return dec2hex(n / 16) + chars.at(i);

    /* Workaround to concat char and string */
    string result = "";
    result += chars.at(i);
    return result;
}

unsigned int hex2dec(string h){
    unsigned int dec = 0, base = 1;
    int index = h.length();
    string chars = "0123456789abcdef";

    while (index--){
        dec += chars.find_first_of(h.at(index)) * base;
        base *= 16;
    }

    return dec;
}

int main() {
    string n;

    while (cin >> n && n != "-1"){
        if (n.size() >= 2 && n.at(1) == 'x'){
            transform(n.begin(), n.end(), n.begin(), ::tolower);
            cout << hex2dec(n.substr(2)) << endl;
        } else {
            cout << "0x" << dec2hex(atoi(n.c_str())) << endl;
        }
    }
    return 0;
}
