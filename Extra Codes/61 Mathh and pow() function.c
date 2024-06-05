/*
pow();
*/
#include<stdio.h>
#include<math.h>//pow function library
int main(){
	int a;
	int b;
	long long int c;
	printf("\nNumber: ");
	scanf("%d",&a);
	printf("\nPower: ");
	scanf("%d",&b);
	c=pow(a,b);//pow(a,b); mean a to the power b or a^b
	printf("\nResult: %d^%d = %lld",a,b,c);
	return 0;
}
/*
output:
Number: 2
Power: 2
Result: 2^2 = 4
*/
