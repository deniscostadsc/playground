#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::string foods, breakfast, lunch, dinner;
    bool cheater;

    std::cin >> n;
    getline(std::cin, foods);  // it's a hack

    while (n--) {
        cheater = false;
        getline(std::cin, foods);
        getline(std::cin, breakfast);
        getline(std::cin, lunch);
        dinner = foods;

        for (size_t i = 0; i < breakfast.length(); i++) {
            if (foods.find_first_of(breakfast.at(i)) == std::string::npos) {
                cheater = true;
            } else {
                if (dinner.find_first_of(
                        breakfast.at(i)) != std::string::npos) {
                    dinner.erase(
                        dinner.begin()+dinner.find_first_of(breakfast.at(i)));
                }
            }
        }

        for (size_t i = 0; i < lunch.length(); i++) {
            if (foods.find_first_of(lunch.at(i)) == std::string::npos) {
                cheater = true;
            } else {
                if (dinner.find_first_of(lunch.at(i)) != std::string::npos) {
                    dinner.erase(
                        dinner.begin()+dinner.find_first_of(lunch.at(i)));
                }
            }
        }

        sort(dinner.begin(), dinner.end());

        if (cheater) {
            std::cout << "CHEATER" << std::endl;
        } else {
            std::cout << dinner << std::endl;
        }
    }

    return 0;
}
