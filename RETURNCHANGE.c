#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x%10 < 5){
	        x = x - (x%10);
	         printf("%d\n",100-x);
	    }
	    else if(x%10 >= 5){
	        x = x - (x%10);
	        x = x+10;
	        printf("%d\n",100-x);
	    }
	}
	return 0;
}

