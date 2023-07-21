#include <stdio.h>

int calculateMana(int n, int p, int x, int k) {
    int mana = p;
    if (k <= x) {
        mana += k * 10;
    }
    else {
        mana += x * 10 + (k - x) * 5;
    }
    if (k == n) {
        mana += 20;
    }
    return mana;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, x, k, p;
        scanf("%d %d %d %d", &n, &x, &k, &p);
        printf("%d\n", calculateMana(n, p, x, k));
    }
    
    return 0;
}
