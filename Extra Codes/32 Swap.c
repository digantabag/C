/*
Swapping With Iterative Approach
*/

#include<stdio.h>
int main(){
	int a,b,c;
	a=0, b=1;
	printf("\nPreviously...");
	printf("\nValue Of A and B: %d and %d",a,b);
	printf("\n");
	c=b;
	b=a;
	a=c;
	printf("\nAfter Swapping...");
	printf("\nValue Of A and B: %d and %d",a,b);
	return 0;
}
/*
a=0,b=1
c=b so c=1
b=a so b=0
a=c so a=1
now a=1 and b=0
*/