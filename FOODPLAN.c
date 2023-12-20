#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    float x,y;
	    scanf("%f %f",&x,&y);
	    x = x - (x/10);
	    if(x<y){
	        printf("ONLINE\n");
	    }
	    else if(x==y){
	        printf("EITHER\n");
	    }
	    else{
	        printf("DINING\n");
	    }
	}
	return 0;
}

