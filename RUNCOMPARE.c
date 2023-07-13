#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	
	    int x,ans=0;
	    scanf("%d",&x);
	    int a[x];
	    int b[x];
	    for(int i=0;i<x;i++){
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<x;i++){
	        scanf("%d",&b[i]);
	    }
	    for(int i=0;i<x;i++){
	        if((a[i]>b[i]*2)||(b[i]>a[i]*2)){
	            ans++;
	        }
	    }
	    printf("%d\n",x-ans);
	}
	return 0;
}

