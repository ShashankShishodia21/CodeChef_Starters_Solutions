#include <stdio.h>

int main(void) {
	// your code goes here
	
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int sum,mul,ans;
	    sum = a+b;
	    mul = a*b;
	    ans = sum - mul;
	    if(ans < 0){
	        printf("%d\n",ans*(-1));
	    }
	    else if(ans >= 0){
	        printf("%d\n",ans);
	    }
	
	return 0;
}

