#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string foods, breakfast, lunch, dinner;
    bool cheater;

    cin >> n;
    getline(cin, foods); // it's a hack
    while (n--){
        cheater = false;
        getline(cin, foods);
        getline(cin, breakfast);
        getline(cin, lunch);
        dinner = foods;

        for (size_t i = 0; i < breakfast.length(); i++){
            if (foods.find_first_of(breakfast.at(i)) == string::npos){
                cheater = true;
            } else {
                if (dinner.find_first_of(breakfast.at(i)) != string::npos){
                    dinner.erase(dinner.begin()+dinner.find_first_of(breakfast.at(i)));
                }
            }
        }

        for (size_t i = 0; i < lunch.length(); i++){
            if (foods.find_first_of(lunch.at(i)) == string::npos){
                cheater = true;
            } else {
                if (dinner.find_first_of(lunch.at(i)) != string::npos){
                    dinner.erase(dinner.begin()+dinner.find_first_of(lunch.at(i)));
                }
            }
        }

        sort(dinner.begin(), dinner.end());

        if (cheater) cout << "CHEATER" << endl;
        else cout << dinner << endl;
    }
    return 0;
}
