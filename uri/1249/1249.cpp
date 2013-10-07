#include <iostream>
#include <string>
#include <cstdio>
// #include <unordered_map>

using namespace std;

char l[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";

// unordered_map<char, char> translated;

char rot13(char c){
    // optimization work only in c++11 standard
    // unordered_map<char, char>::const_iterator p = translated.find(c);
    int i;

    // if (p != translated.end())
        // return p->second;
    // else {
        for (i = 0; i <= 25; i++){
            if (c == l[i]){
                // translated.insert({{c, l[i + 13]}});
                return l[i + 13];
            }
        }
        for (i = 0; i <= 25; i++){
            if (c == u[i]){
                // translated.insert({{c, u[i + 13]}});
                return u[i + 13];
            }
        }
        // translated.insert({{c, c}});
        return c;
    // }
}

int main(){
    char c;
    while((c = getchar()) != EOF){
        cout << rot13(c);
    }
    return 0;
}
