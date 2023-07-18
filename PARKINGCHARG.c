#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,h,ans;
	scanf("%d %d %d",&x,&y,&h);
	if(h>1){
	    ans = (h-1)*y + x;
	    printf("%d\n",ans);
	}
	else{
	    printf("%d\n",x);
	}
	return 0;
}

