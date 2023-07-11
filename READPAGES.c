#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d",&n,&x,&y);
	    if(n<=(x*y)){
	        printf("YES\n");
	    }
	    else if(n>=(x*y)){
	        printf("NO\n");
	    }
	}
	return 0;
}

