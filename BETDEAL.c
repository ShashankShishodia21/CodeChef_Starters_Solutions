#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z1,z2;
	    scanf("%d %d",&x,&y);
	    z1 = 100-x;
	    z2 = 200-(y*2);
	    if(z1 < z2){
	        printf("FIRST\n");
	    }
	    else if(z1 > z2){
	        printf("SECOND\n");
	    }
	    else{
	        printf("BOTH\n");
	    }
	}

	return 0;
}

