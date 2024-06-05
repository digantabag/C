/*NULL ponter mean pointer without declaration, or didn't assigned any value
if we write a pointer and didn't give it declaration it gives garbage value
if we write a pointer = null it doesn't give garbage value  it returns 0
use null pointer to avoid garbage value for unassigned pointers 
*/

#include<stdio.h>
int main(){
	int a=7;
	int* p=&a;//pointer p is assigned
	int* q;//pointer q is unassigned so it returns garbage value
	int* r=NULL;//pointer r is unassigned but with null so it returns 0
	printf("\nAddress of a using pointer p: %d",p);
	printf("\nAddress of pointer q which is undeclared is: %d",q);
	printf("\nAddress of r which is Null is: %d",r);
	return 0;
}
/*
output
Address of a using pointer p: 6684164
Address of pointer q which is undeclared is: 55 //random garbage value
Address of r which is Null is: 0
*/