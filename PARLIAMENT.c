#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    float n,x;
	    scanf("%f %f",&n,&x);
	    if(x >= n/2){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

