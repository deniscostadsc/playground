#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>


using namespace std;

int main() {
    int n, time, total_time, count, extra_time[26];
    char letter;
    string status, letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (scanf("%d", &n) && n) {
        total_time = 0;
        count = 0;
        memset(extra_time, 0, sizeof(extra_time));

        while (n--) {
            cin >> letter >> time >> status;

            if (status == "correct") {
                total_time += time;
                total_time += extra_time[letters.find(letter)];
                count++;
            } else {
                extra_time[letters.find(letter)] += 20;
            }
        }

        printf("%d %d\n", count, total_time);
    }

    return 0;
}
