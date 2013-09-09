#include <iostream>

int main(){
    long long int x, y, a;
    std::cin >> x;
    std::cin >> y;

    if (x > y){
        a = x;
        x = y;
        y = a;
    }

    for (int i = x + 1; i < y; i++){
        if (i % 5 == 2 || i % 5 == 3)
            std::cout << i << std::endl;
    }
    return 0;
}
