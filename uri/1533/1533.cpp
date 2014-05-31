#include <iostream>

using namespace std;

int main (){
    int qty, current_index, first_index, second_index,
        number, first_suspicous, second_suspicous;

    while (cin >> qty && qty){
        first_suspicous = 0;
        second_suspicous = 0;
        current_index = 0;

        while (++current_index <= qty){
            cin >> number;

            if (number > first_suspicous){
                second_suspicous = first_suspicous;
                second_index = first_index;

                first_suspicous = number;
                first_index = current_index;
            } else if (number > second_suspicous){
                second_suspicous = number;
                second_index = current_index;
            }
        }

        cout << second_index << endl;
    }

    return 0;
}
