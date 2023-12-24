#include <stdio.h>

int main(void) {
	int a,b,x,y;
	scanf("%d %d %d %d",&a,&b,&x,&y);
	a = a*2;
	x = x*2;
	if(a+b > x+y){
	    printf("Messi\n");
	}
	else if(a+b == x+y){
	    printf("Equal\n");
	}
	else{
	    printf("Ronaldo\n");
	}
	return 0;
}

