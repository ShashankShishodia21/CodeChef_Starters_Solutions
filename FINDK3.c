#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z,a,b;
	    int result=0;
	    scanf("%d %d %d",&x,&y,&z);
	    if((y*x)%z==0){
	        a = y*x;
	        b = z;
	        result++;
	    }
	    else if((y*z)%x==0){
	        a = y*z;
	        b = x; 
	        result++;
	    }
	    else if((x*z)%y==0){
	        a = x*z;
	        b = y;
	        result++;
	    }
	    else{
	        result = 0;
	    }
	    if(result>0){
	        printf("%d %d\n",a,b);
	    }
	    else{
	        printf("-1\n");
	    }
	}
	return 0;
}

