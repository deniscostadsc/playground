#include <cstdio>

int main() {
    int n, team_1_1, team_2_1, team_1_2, team_2_2;

    scanf("%d", &n);

    while (n--) {
        scanf("%d x %d", &team_1_1, &team_2_1);
        scanf("%d x %d", &team_2_2, &team_1_2);

        if (team_1_1 + team_1_2 > team_2_1 + team_2_2) {
            puts("Time 1");
        } else if (team_1_1 + team_1_2 < team_2_1 + team_2_2) {
            puts("Time 2");
        } else if (team_1_2 > team_2_1) {
            puts("Time 1");
        } else if (team_1_2 < team_2_1) {
            puts("Time 2");
        } else {
            puts("Penaltis");
        }
    }

    return 0;
}
