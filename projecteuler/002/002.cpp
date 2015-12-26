#include <iostream>
#include <map>

using namespace std;

map<int,int> previous_answers;

int fibonacci(int n){
    int answer;

    if (previous_answers[n]) return previous_answers[n];

    if (n <= 1) answer = 1;
    else answer = fibonacci(n - 1) + fibonacci(n - 2);

    previous_answers[n] = answer;

    return answer;
}

int main(){
    int n, i = 0, s = 0;

    while (true){
        n = fibonacci(i);

        if (n >= 4000000) break;

        if (n % 2 == 0) s += n;

        i++;
    }

    cout << s << endl;

    return 0;
}
