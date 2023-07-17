#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int p,q,r,s;
	    scanf("%d %d %d %d",&p,&q,&r,&s);
	    if(p>q && p>r && p>s){
	        if(p > (q+r+s)){
	            printf("YES\n");
	        }
	        else{
	            printf("NO\n");
	        }
	    }
	    else if(q>p && q>r && q>s){
	        if(q > (p+r+s)){
	            printf("YES\n");
	        }
	        else{
	            printf("NO\n");
	        }
	    }
	    else if(r>p && r>s && r>q){
	        if(r > (p+q+s)){
	            printf("YES\n");
	        }
	        else{
	            printf("NO\n");
	        }
	    }
	    else if(s>p && s>r && s>q){
	        if(s > (p+r+q)){
	            printf("YES\n");
	        }
	        else{
	            printf("NO\n");
	        }
	    }
	    else{
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

