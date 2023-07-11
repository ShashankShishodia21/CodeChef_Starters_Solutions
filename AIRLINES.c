#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	     int x,y,z,ans;
	     scanf("%d %d %d",&x,&y,&z);
	     int tcap=x*10;
	     if(y<=tcap){
	        ans = y*z;
	     }
	     else if(y>tcap){
	        ans = tcap*z;
	     }
	    printf("%d\n",ans);
	}
	return 0;
}

