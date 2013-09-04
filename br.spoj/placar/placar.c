#include <stdio.h>
#include <string.h>

int main(){
    int i, j, m, p, c = 1;
    char n[21], r[21];
    while(scanf("%d", &i) != EOF){
        m = 11;
        while(i--){
            scanf("%s %d", n, &p);
            if (p < m){
                strcpy(r, n);
                m = p;
            } else if (p == m){
                for (j = 0; j <= 20; j++){
                    if (r[j] < n[j] || r[j] == '\0'){
                        strcpy(r, n);
                        break;
                    } else if (n[j] < r[j] || n[j] == '\0'){
                        strcpy(n, r);
                        break;
                    }
                }
            }
        }
        printf("Instancia %d\n", c++);
        printf("%s\n", r);
    }
    return 0;
}
