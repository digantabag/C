//pointers
/*
pointer is a variable which store the address of another variable
address is memory location stored in ram
int a; ponter can store address of a
size of ponter is 2 byte for 32 bit arch
like int store interger, float > floating numbers, char store character,
in that way pointer stores address of variable, so it's also an derived datatype
ponter declared using *

& returns the address of a vairable
so work of scanf("%d",&a);
is scanf store user given value at address of a, 
then the value of a is user given

* is the reference operator
* give value at address &a

* # theese are also called indirection operator
used to get the values at a given address
like #include<stdio.h> here # access values at address stdio.h or library files


int a; int store a, a=7, 7 store at variable a
int *p = &a; p is an ponter variable, &a is address of a,not the vaue of a which is 7
p is ponter to a

int a=7;
int *p = &a; it is just for declaration
here only p store the address of a not * so we can also write int* p=&a; for better under standing
and whole *p store the value of a which is a=7

*/


#include<stdio.h>
int main(){
	int a;
	a=7;
	int* p = &a; //we can write like this int* mean every under int* is pointer variable
	//int *p = &a; //*p mean p is a pointer variable here * used as to make p a pointer
				 //but only p here store the address of a which is unknown
				 //and whole *p here store the value of a which is 7 
	//int *p = &a, b=7;//in that case *p is pointer variable but  b is normal variable
	int **r = &p; //ponter to pointer ** for ptop others wise run with compiling error 
	//or we can write it as [int *r=&*p; but it gives different output
	printf("\nValue of a is: %d",a); //here a print mean value of a which is 7
	//printf("\nValue of b is: %d",b); //
	printf("\nAddress of a is: %d",&a); //here &a mean address of a which we dont know, we know by printing output
	printf("\nValue of a is using pointer: %d",*p); //in that case *p store the value of a and
	//so value of a and *p(not p) is same
	printf("\nAddress of a is using pointer: %d",p); //p store the address of a 
	//there also a address of pointer also, which is get by &p
	printf("\nAddress of pointer p is: %d",&p);
	printf("\nAddress of a using ponter is indirectly: %d",&*p);
	//&*p mean &a because
	/*
	&p mean address of p
	&*p mean address of *p
	now value of *p and a is same 7
	so *p=a
	so address of *p= address of a
	so &*p = &a
	*/
	printf("\nAddress of pointer p using p to p is: %d",r);
	/* p to p mean 
	pointer to pointer mean another ponter which stores the address of pointer p
	*/
	printf("\nAddress of a using p to p is: %d",*r);
	/*
	in that case it return address of a
	*r mean value of p [not value of *p]
	and we know value of only p is the address of a 
	so *r=value of only p=addrees of a 
	*/
	/*
	if we have to find values at a using p to p concept
	then we have to write int* r = &*p;
	*/
	int* q = &*p;
	printf("\nAddress of a using p to p is: %d",q);
	/*
	*q mean value at *p which is a=7
	because value of *p = a so address of *p = address of a
	&*p=&a  
	q mean address of *p
	so q=&*p hence q=&a 
	
	so only q print address of a 
	
	&*q also pront same*/
	
	printf("\nValues of a using p to p is: %d",*q);
	/*
	*q mean values at *p and values of *p is a which is 7
	so *q print 7 value of a
	*/
	
	printf("\nAddress of a is: %x",&a); //%x print memory address in hexadecimal form
	//%p print also can print pointer variable in hex but all in capital
	return 0;
}




/*
output
Value of a is: 7
Address of a is: 6684172
Value of a is using pointer: 7
Address of a is using pointer: 6684172
Address of pointer p is: 6684160
Address of a using ponter is indirectly: 6684172
Address of pointer p using p to p is: 6684160
Address of a using p to p is: 6684172
Address of a using p to p is: 6684172
Values of a using p to p is: 7
--------------------------------

here we can see every variable address is different
*/
/*
so work of scanf("%d",&a);
is scanf store user given value at address of a, then the value of a is user given
*/

/*
pointer used in dynamic memory allocation, linked list, array, function, structure
traversing, searching, memory managment etc
we discuss about letter
pointer can return multiple values for function
*/