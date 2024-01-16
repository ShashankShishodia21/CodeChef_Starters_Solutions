#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
        int eve, odd;
        eve = x/2;
        odd = x % 2;
        printf("%d %d\n",eve+odd,x);
    }
}

