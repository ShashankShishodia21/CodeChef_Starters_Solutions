#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while (t--){
	    int x,y,c;
	    scanf("%d %d",&x,&y);
	    if(y>x){
	        c =y-x;
	        c = c*2 + x;
	        printf("%d\n",c);
	    }
	    else{
	        printf("%d\n",y);
	    }
	}
	return 0;
}

