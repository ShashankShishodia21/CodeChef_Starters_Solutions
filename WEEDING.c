#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m, k;
        int ans = 0;
        int curr;
        
        scanf("%d %d %d", &n, &m, &k);
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        for (int i = 0; i < n; i++) {
            curr = arr[i] + k;
            if (curr <= m+1) {
                ans++;
            }
        }
        
        if (ans == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
