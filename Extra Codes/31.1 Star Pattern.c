/*
Star Pattern
*/
#include<stdio.h>
int main(){
	int i,j,n,t;
	printf("\nEnter The Length: ");
	scanf("%d",&n);
	printf("\nType 0 For Triangular Star Pattern");
	printf("\nType 1 For Triangular Star Pattern");
	printf("\nType: ");
	again:
	scanf("%d",&t);
	if(t==0){
	printf("\nTriangular Star Pattern...\n");
	printf("\n");
	for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
	}
	else if(t==1){
	printf("\nReverse Triangular Star Pattern...\n");
	printf("\n");
	for(i=n;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
	}
	else{
		printf("\nInvalid Input! Enter Type Again: ");
		goto again;
	}
	return 0;
}
/*
triangular star pattern
when i=1
j=1,j<=1 so j looped 1 time so print 1 *
\n
when i=2;
j=1,j<=2
j=1,j=2 s looped 2 times so print 1 star for 1st loop of j and 2nd star for 2nd loop of j so it print * *
\n
for i=3; 
j=1,2,3 so it looped for 3 times and print ***
and final outputis
*
**
***

and same thing happen with reverse but in reverse
like here i started from 3 and go to so heree
first i=3; so j=1,2,3 j looped 3 times and print ***
second i=2; so j=1,2 j looped 2 times and print **
third i=1; so j=1 j looped 1 times and print *
so final output is
***
**
*
*/
