#include <iostream>

using namespace std;

string dec2bin(int n){
    if (n == 0) return "0";
    if (n == 1) return "1";

    if (n % 2 == 0)
        return dec2bin(n / 2) + "0";
    return dec2bin(n / 2) + "1";
}

int main(){
    int i, h, m, h_binary_length, m_binary_length;
    char c;
    string h_binary, m_binary;

    while(cin >> h >> c >> m){
        h_binary = dec2bin(h);
        m_binary = dec2bin(m);
        h_binary_length = h_binary.length();
        m_binary_length = m_binary.length();

        cout << " ____________________________________________" << endl;
        cout << "|                                            |" << endl;
        cout << "|    ____________________________________    |_" << endl;
        cout << "|   |                                    |   |_)" << endl;
        cout << "|   |   8         4         2         1  |   |" << endl;
        cout << "|   |                                    |   |" << endl;

        cout << "|   |   ";

        int k = 0;
        for (i = 3; i >= 0; i--){
            if (h_binary_length - 1 >= i){
                if (h_binary[k] == '1'){
                    cout << "o";
                } else {
                    cout << " ";
                }
                k++;
            } else {
                cout << " ";
            }
            if (i != 0) cout << "         ";

        }

        cout << "  |   |" << endl;
        cout << "|   |                                    |   |" << endl;
        cout << "|   |                                    |   |" << endl;
        cout << "|   |   ";

        k = 0;
        for (i = 5; i >= 0; i--){
            if (m_binary_length - 1 >= i){
                if(m_binary[k] == '1'){
                    cout << "o";
                } else {
                    cout << " ";
                }
                k++;
            } else {
                cout << " ";
            }
            if (i != 0) cout << "     ";
        }

        cout << "  |   |" << endl;

        cout << "|   |                                    |   |" << endl;
        cout << "|   |   32    16    8     4     2     1  |   |_" << endl;
        cout << "|   |____________________________________|   |_)" << endl;
        cout << "|                                            |" << endl;
        cout << "|____________________________________________|" << endl << endl;

    }

    return 0;
}
