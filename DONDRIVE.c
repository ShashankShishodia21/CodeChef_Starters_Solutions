#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,n;
	    scanf("%d %d",&x,&n);
	    if(x>=n){
	    printf("%d\n",x-n);
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;
}

