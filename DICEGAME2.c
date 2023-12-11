#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,x,y,z;
	    int sum1,sum2;
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
	    if(a>=b && a>=c){
	        if(b>=c){
	            sum1 = a+b;
	        }
	        else{
	            sum1 = a+c;
	        }
	    }
	    else if(b>=a && b>=c){
	        if(a>=c){
	            sum1 = a+b;
	        }
	        else{
	            sum1 = b+c;
	        }
	    }
	    else if(c>=a && c>=b){
	        if(a>=b){
	            sum1 = a+c;
	        }
	        else{
	            sum1 = b+c;
	        }
	    }
	    if(x>=y && x>=z){
	        if(y>=z){
	            sum2 = x+y;
	        }
	        else{
	            sum2 = x+z;
	        }
	    }
	    else if(y>=x && y>=z){
	        if(x>=z){
	            sum2 = x+y;
	        }
	        else{
	            sum2 = y+z;
	        }
	    }
	    else if(z>=x && z>=y){
	        if(x>=y){
	            sum2 = x+z;
	        }
	        else{
	            sum2 = y+z;
	        }
	    }
	    if(sum1 > sum2){
	        printf("Alice\n");
	    }
	    else if(sum2 > sum1){
	        printf("Bob\n");
	    }
	    else{
	        printf("Tie\n");
	    }
	}
	return 0;
}

