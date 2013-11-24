#include <iostream>
#include <cstdio>

using namespace std;

bool i = false;
bool b = false;

void bloggo(char c){
    if (c == '_'){
        if (!i) cout << "<i>";
        else cout << "</i>";

        i = !i;
    } else if (c == '*'){
        if (!b) cout << "<b>";
        else cout << "</b>";

        b = !b;
    } else {
        cout << c;
    }
}

int main(){
    char c;
    while((c = getchar()) != EOF){
        bloggo(c);
    }
    return 0;
}
