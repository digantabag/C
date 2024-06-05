/*
static variables
example 
static int a=2;

static variable have aproperty of preserving their values even they go out of scope.

and preserve their value from the previous scope and are not initialized again

static variable remains in memory throughout the span of the program

static variables are initialized to 0 if not initialized explicitly

in c, static variables can only be initialized using constant literals
*/
#include<stdio.h>
int fun(){
	static int n=5; //if value not given then think it as 0
	//here doen't accept function direct like static int n=fun1();
	printf("\nValue Of n is: %d",n);
	n++;
	return n;
}

int main(){
	int a;
	a=fun();
	a=fun();
	a=fun();
	a=fun();
	return 0;
}
/*
Value Of n is: 5
Value Of n is: 6
Value Of n is: 7
Value Of n is: 8
*/
/*we static variable change there value call by call
5 > 6
6 > 7
7 > 8
*/
/*
if we didn't give static 
then output
Value Of n is: 5
Value Of n is: 5
Value Of n is: 5
Value Of n is: 5
*/