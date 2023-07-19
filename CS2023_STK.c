#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of days

        int om[N], addy[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &om[i]); // Read Om's problem count for each day
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &addy[i]); // Read Addy's problem count for each day
        }

        int om_streak = 0, addy_streak = 0;
        int om_max_streak = 0, addy_max_streak = 0;

        for (int i = 0; i < N; i++) {
            // Update Om's streak
            if (om[i] > 0) {
                om_streak++;
            } else {
                om_streak = 0;
            }
            
            // Update Addy's streak
            if (addy[i] > 0) {
                addy_streak++;
            } else {
                addy_streak = 0;
            }

            // Update Om's maximum streak
            if (om_streak > om_max_streak) {
                om_max_streak = om_streak;
            }

            // Update Addy's maximum streak
            if (addy_streak > addy_max_streak) {
                addy_max_streak = addy_streak;
            }
        }

        if (om_max_streak == addy_max_streak) {
            printf("DRAW\n");
        } else if (om_max_streak > addy_max_streak) {
            printf("OM\n");
        } else {
            printf("ADDY\n");
        }
    }

    return 0;
}
