#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,n;
	    scanf("%d %d",&x,&n);
	    printf("%d\n",(n/2)+1);
	}
	return 0;
}

