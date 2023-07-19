#include <stdio.h>

int main(void) {
	// your code goes here
	int x,n,m;
	scanf("%d %d %d",&x,&n,&m);
	if(x+m >= n){
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
	return 0;
}

