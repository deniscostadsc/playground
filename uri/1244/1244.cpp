#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>

using namespace std;

struct Pair {
    string first;
    unsigned int second;
};

bool compare(Pair i, Pair j){
    if (i.first.length() == j.first.length())
        return i.second < j.second;
    return i.first.length() > j.first.length();
}

int main(){
    int n;
    string s;

    cin >> n;
    getline(cin, s);  // it's a hack!!!
    while (n--){

        /* I get the line
           create a iterator
           run a "split" by space character  */
        getline(cin, s);
        istringstream is(s);
        vector<string> raw_strings(istream_iterator<string>{is}, istream_iterator<string>{});

        vector<Pair> strings;

        for (unsigned int i = 0; i < raw_strings.size(); i++){
            strings.push_back({raw_strings.at(i), i});
        }

        sort(strings.begin(), strings.end(), compare);

        for (unsigned int i = 0; i < strings.size(); i++){
            cout << strings.at(i).first;
            if (i < strings.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
