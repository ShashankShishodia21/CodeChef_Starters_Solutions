#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,nob,ans=0;
	    float sum=0;
	    float divi;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        nob = i+1; 
	        sum = sum + arr[i];
	        divi = sum/nob;
	        if(divi == 1){
	            ans++;
	        }
	    }
	    printf("%d\n",ans);
	}
	return 0;
}

