/*
find size of different datatypes int, float, char using pointer
*/
//i write this code the code run give output as i want but show error to find size of diffrtrnt datatypes int, float, char using pointer
//error"
//[Warning] assignment to 'int' from 'int *' makes integer from pointer without a cast [-Wint-conversion]
//[Warning] initialization of 'int' from 'float *' makes integer from pointer without a cast [-Wint-conversion]
//[Warning] initialization of 'int' from 'char *' makes integer from pointer without a cast [-Wint-conversion]
#include<stdio.h>
int main(){
	int a,b;
	int *p=&a;
	int c=p;
	int d=p+1;
	b=d-c;
	printf("\nSize Of Int: %d bytes",b);
	
	float f;
	float *q=&f;
	int g=q;
	int h=q+1;
	int e=h-g;
	printf("\nSize Of Float: %d bytes",e);
	
	char i;
	char *r=&i;
	int m=r;
	int n=r+1;
	int j=n-m;
	printf("\nSize Of Char: %d bytes",j);
	
	return 0;
}

/*
output:
Size Of Int: 4 bytes
Size Of Float: 4 bytes
Size Of Char: 1 bytes
*/