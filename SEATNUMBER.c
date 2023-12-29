#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	int x;
	scanf("%d",&x);
	if(x>=1 && x<=10){
	    printf("Lower Double\n");
	}
	else if(x>=11 && x<=15){
	    printf("Lower Single\n");
	}
	else if(x>=16 && x<=25){
	    printf("Upper Double\n");
	}
	else if(x>=26 && x<=30){
	    printf("Upper Single\n");
	}
	}
	return 0;
}

