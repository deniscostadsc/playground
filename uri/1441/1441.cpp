#include <iostream>
#include <vector>

using namespace std;

vector<int> sequence;

void ackermann(int h){
    sequence.push_back(h);
    if (h != 1){
        if (h % 2 == 0) ackermann(h / 2);
        else ackermann(3 * h + 1);
    }
}

int main(){
    int h, i, greatest;

    while (cin >> h && h){
        ackermann(h);

        greatest = 0;
        for (i = 0; i < sequence.size(); i++){
            if (greatest < sequence.at(i)){
                greatest = sequence.at(i);
            }
        }

        cout << greatest << endl;
        sequence.clear();
    }
    return 0;
}
