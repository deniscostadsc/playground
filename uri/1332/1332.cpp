#include <cstdio>
#include <cstring>

int main(){
    int n;
    char s[6];

    scanf("%d", &n);
    while(n--){
        scanf("%s", s);
        if (std::strlen(s) == 5)
            printf("3\n");
        else if ((s[0] == 't' &&  s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o' ))
            printf("2\n");
        else
            printf("1\n");
    }
}
