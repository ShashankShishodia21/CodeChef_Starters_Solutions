#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int om[N], addy[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &om[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &addy[i]); 
        }

        int om_streak = 0, addy_streak = 0;
        int om_max_streak = 0, addy_max_streak = 0;

        for (int i = 0; i < N; i++) {
           
            if (om[i] > 0) {
                om_streak++;
            } else {
                om_streak = 0;
            }
            
            
            if (addy[i] > 0) {
                addy_streak++;
            } else {
                addy_streak = 0;
            }

            
            if (om_streak > om_max_streak) {
                om_max_streak = om_streak;
            }

           
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
