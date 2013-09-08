#include <iostream>

int main(){
    int n;

    std::cin >> n;

    if (n % 2 == 0)
        n++;
    for (int i = 0; i <= 5; i++, n += 2) std::cout << n << std::endl;

    return 0;
}