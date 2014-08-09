#include <iostream>

using namespace std;

int main(){
    int a, d, i, j, nearest_attack_player, defense_distance, count, temp;

    while (cin >> a >> d && a && d){
        cin >> nearest_attack_player;

        for (i = 1; i < a; i++){
            cin >> temp;
            if (temp < nearest_attack_player) nearest_attack_player = temp;
        }

        count = 0;

        for (j = 0; j < d; j++){
            cin >> defense_distance;
            if (defense_distance <= nearest_attack_player) count++;
        }

        if (count >= 2) cout << "N" << endl;
        else cout << "Y" << endl;
    }

    return 0;
}
