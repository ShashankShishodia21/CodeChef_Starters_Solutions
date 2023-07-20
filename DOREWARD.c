#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x<=3){
	        printf("Bronze\n");
	    }
	    else if(x>3 && x<=6){
	        printf("Silver\n");
	    }
	    else if(x>6){
	        printf("Gold\n");
	    }
	}
	return 0;
}

