#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
    int16_t n, m, i, j, scored_all_goals, scored_gols_in_match, players_count;
    char *number;

    while (scanf("%d %d", &n, &m) != EOF) {
        players_count = 0;
        for (i = 0; i < n; i++) {
            scored_all_goals = 1;
            for (j = 0; j < m; j++) {
                scanf("%d", &scored_gols_in_match);
                if (scored_gols_in_match == 0) {
                    scored_all_goals = 0;
                }
            }
            if (scored_all_goals == 1) {
                players_count++;
            }
        }
        printf("%d\n", players_count);
    }

    return 0;
}
