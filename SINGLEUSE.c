#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	
	    int x,y,h,ans,k=1;
	    scanf("%d %d %d",&h,&x,&y);
	     
	    ans = h-y;
	    
	    for(int i=0;i<h;i++){
	        if(ans>0){
	        ans = ans-x;
	        k++;
	        }
	        else{
	            break;
	        }
	      }
	    
	    printf("%d\n",k);
	}
	return 0;
}

