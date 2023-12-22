#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    if(n>=m){
	        printf("%d\n",(m-n) * -1);
	    }
	    else if(m>n){
	        printf("0\n");
	    }
	    
	    
	}
	return 0;
}

