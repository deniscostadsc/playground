#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

char l[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";
char u[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";

char rot13(char c){
    int i;

    for (i = 0; i <= 25; i++){
        if (c == l[i]){
            return l[i + 13];
        }
    }
    for (i = 0; i <= 25; i++){
        if (c == u[i]){
            return u[i + 13];
        }
    }
    return c;
}

int main(){
    char c;
    while((c = getchar()) != EOF){
        cout << rot13(c);
    }
    return 0;
}
