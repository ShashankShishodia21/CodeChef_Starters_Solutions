#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y;
	    scanf("%d %d %d",&n,&x,&y);
	    int remy = y/3;
	    int remx = x - remy;
	    int remn = n - remy;
	    if((x>=n && y>=n*3) || (x>=n*2)){
	        printf("YES\n");
	    }
	    else if((remx >= remn) && (remn <= remx/2)){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}

}

