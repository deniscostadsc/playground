#include <iostream>
#include <cassert>
#include <cstdlib>
#include <string>

using namespace std;

string dec2bin(unsigned int n){
    if (n == 0) return "0";
    if (n == 1) return "1";

    if (n % 2 == 0) return dec2bin(n / 2) + "0";
    return dec2bin(n / 2) + "1";
}

unsigned int bin2dec(string b){
    unsigned int dec = 0, base = 1;
    int index = b.length();

    while (index--){
        if (b.at(index) == '1') dec += base;
        base *= 2;
    }

    return dec;
}

string dec2hex(unsigned int n){
    string chars = "0123456789abcdef";

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

int main(){
    int n, nn;
    string number, base;

    cin >> n;
    nn = 0;
    while (nn++ < n){
        cin >> number >> base;
        cout << "Case " << nn << ":" << endl;

        if (base == "bin"){
            cout << bin2dec(number) << " dec" << endl;
            cout << dec2hex(bin2dec(number)) << " hex" << endl;
        } else if (base == "dec"){
            cout << dec2hex(atoi(number.c_str())) << " hex" << endl;
            cout << dec2bin(atoi(number.c_str())) << " bin" << endl;
        } else {
            cout << hex2dec(number) << " dec" << endl;
            cout << dec2bin(hex2dec(number)) << " bin" << endl;
        }

        cout << endl;
    }

    return 0;
}
