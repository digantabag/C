/*
actual parameter & formal parameter
int add(int a,int b){//here a and b copies the value of x and y so it's formal parameter
	int c;//here only accessed by add function not main function that's why c is local variable 
	c=a+b;
	return c;
}
int main(){
	int x=1,y=2,z;//here x,y also accsed by function because it's actual parameter so x,y is global parameter
	z=add(x,y); //here x and y pass through argument and it's an  actual parameter
	//we can't write here z=c; because c is a local variable only accessed by add function
	printf("%d",z);
	return 0;
}

here a,b copies the values of x,y but a,b can't able to change the value of x,y
this process called by value

if a,b copies the address of x,y then a,b able to change the value of x,y 
this process called by reference

think
in a exam saikat copies from diganta
diganta have the original page
and saikat have the copy of original page

now saikat cant able make change in original page that's is called by value
and if diganta give the original page to saikat (adrress in programming language)
then saikat able to make change in original page that's is called by reference
*/

#include<stdio.h>
void swap_cbv(int x,int y){//call by value
					int z;
					z=y;
					y=x;
					x=z;
}
void swap_cbr(int *x,int *y){//call by reference
					int z;
					z=*y;
					*y=*x;
					*x=z;
}
int main(){
	int a,b,d,e;
	a=0, b=1;
	d=0, e=1;
	printf("\nPreviously...");
	printf("\nValue Of A and B: %d and %d",a,b);
	printf("\nValue Of D and E: %d and %d",d,e);
	printf("\n");
	
	swap_cbv(a,b);
	
	printf("\nAfter Swapping...");
	printf("\n");
	printf("\nFor Call By Value...");
	printf("\nValue Of A and B: %d and %d",a,b);
	
	swap_cbr(&d,&e);
	printf("\n");
	printf("\nFor Call By Reference...");
	printf("\nValue Of D and E: %d and %d",d,e);
	return 0;
}

/*
Previously...
Value Of A and B: 0 and 1
Value Of D and E: 0 and 1

After Swapping...

For Call By Value...//here we can see x&y can't be able to change value of a&b because they don't have address of a&b
Value Of A and B: 0 and 1

For Call By Reference...//here we can see d&e able change value of D&E because x&y have address of d&e
Value Of D and E: 1 and 0
*/
//another example

#include<stdio.h>
void cbv(int v){
	v=69;
}
void cbr(int *r){
	*r=13;
}
int main(){
	int a,b;
	a=5,b=6;
	printf("\nPreviously...");
	printf("\nValue Of A: %d",a);
	printf("\nValue Of B: %d",b);
	printf("\n");
	
	cbv(a);
	cbr(&b);
	printf("\nAfter");
	printf("\n");
	printf("\nFor Call By Value...");
	printf("\nValue Of A: %d",a);
	
	printf("\n");
	printf("\nFor Call By Reference...");
	printf("\nValue Of B: %d",b);
	return 0;
}

/*
Previously...
Value Of A: 5
Value Of B: 6

After

For Call By Value...
Value Of A: 5

For Call By Reference...
Value Of B: 13
*/
//example call by reference
#include<stdio.h>
void cbr(int *x, int *y){
	int z;
	z=*x;
	*x=(*x)+(*y);
	*y=z-(*y);
}
int main(){

	int a,b;
	a=9,b=7;
	printf("\nValue Of A: %d",a);
	printf("\nValue Of B: %d",b);
	printf("\n");

	cbr(&a,&b);
	printf("\nAfter A=A+B & B=A-B");
	printf("\nValue Of A: %d",a);
	printf("\nValue Of B: %d",b);
	return 0;
}
/*
Value Of A: 9
Value Of B: 7

After A=A+B & B=A-B
Value Of A: 16
Value Of B: 2
*/