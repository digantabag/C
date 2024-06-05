#include<stdio.h>
int main(){
	int a,b;
	printf("\nEnter number a: ");
	scanf("%d",&a);
	printf("\nEnter number b: ");
	scanf("%d",&b);
	
	printf("\na&&b: %d",a&&b);//a and b;if both value is true mean a,b!=0 or a,b>=1, a<=1{not 0} then it returns 1 
	                          //if one of the value between a&b is 0 then it returns 0 because it is false  
	printf("\na||b: %d",a||b);//a or b; if one of the value between a&b is 1 or <=1 or >=1 then it returns 1 because it is true
							  // if both a and b value is 0, a,b==0 then it return 0 because it is false   
	printf("\n!(a&&b): %d",!(a&&b));//it's print reverse value of a&&b, if a&&b is true then !(a&&b) is false
	printf("\n!(a||b): %d",!(a||b));//it's print reverse value of a||b, if a||b is true then !(a||b) is false	

	return 0;
}