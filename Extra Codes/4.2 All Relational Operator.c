#include<stdio.h>
int main(){
	int a,b;
	printf("\nEnter number a: ");
	scanf("%d",&a);
	printf("\nEnter number b: ");
	scanf("%d",&b);
	printf("\na==b: %d",a==b);//==if both variable is equal then it's true and print 1, if false then print 0
	printf("\na!=b: %d",a!=b);//a!=b mean if a not equal to b then it's true and print 1, if equal print 0, because it's false
	printf("\na>b: %d",a>b);//true(1) if a greater than b other wise false(0)
	printf("\na<b: %d",a<b);//true(1) if a less than b other wise false(0)
	//[for a<b and a>b if both value is equal in that case it's automatically give random value between 0 or 1]
	printf("\na>b: %d",a>=b);//true(1) if a greater than equal to b other wise false(0)
	printf("\na<b: %d",a<=b);//true(1) if a less than equal to b other wise false(0)
	return 0;
}