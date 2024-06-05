//pointer arithmatic
/*
operations
++,--,+,-
++mean + size of 1 int/char datatype, + mean +2 +3 etc +2 mean + size of 2 datatype{int}
like p++ or p+1 where p is a pointer variable

but if we write *p+1
it's mean value at p + 1 [not size of int here only 1] 
*/

#include<stdio.h>
int main(){
	int a=7; //if there's no value of a and we print *p then it throw error 
	int *p = &a;//we get the value of a using *p that's called de referencing
	printf("\nValue Of a is: %d", *p);
	printf("\nAddress Of a is: %d", p);
	p++;//it's mean p store address of a
		//now p++ mean address of a + size of 1 int
		// if address of a is 100, and size of int is 4
		//so now address of a prints 104
	printf("\nAddress Of a is after ++: %d", p);//if we didn't mention p++ before then
												//here we have to write p+1 but p is value not change permanently
												//also we can do it p+2 or 3 for increase the value more
	p--;
	printf("\nAddress Of a is after --: %d", p);
	
	int b=8;
	int *q = &b;
	printf("\nValue Of b is: %d", *q);
	printf("\nAddress Of b is: %d", q);
	printf("\nAddress Of b is after +2: %d", q+2);
	printf("\nAddress Of b is after -1: %d", q-1);
	printf("\nValue Of b is after +1: %d", *q+1);
	
	int c=9;
	int *r = &c;
	printf("\nValue Of c is: %d", *r);
	printf("\nAddress Of c is: %d", r);
	printf("\nAddress Of c is after ++: %d", r++);//here address(r) of c print then it r++;
	printf("\nAddress Of c is after --: %d", r--);//here preivious address(r++) print and then r-- execute
	printf("\nAddress Of c is at last: %d", r);//here  address at r-- print

	
return 0;
}

/*
Value Of a is: 7
Address Of a is: 6684180 //before mention will change value of p permently that's why it's carry over ++ value on next step also
Address Of a is after ++: 6684184 //after ++ address of a becomes 80+4(size of 1 int 4)=84
Address Of a is after --: 6684180 // after -- address of a becomes 84-4=80 again

size of int vary architechture wise like
for 32 bit arch it takes 2 byte and for 64 bit it takes 4 byte

Value Of b is: 8
Address Of b is: 6684168 //because q+1 declared under printf that's why it's not permenent it's just for print
Address Of b is after +2: 6684176 //after q+2 address of b becomes 68+(4x2)=76
Address Of b is after -1: 6684164 //because before q+2 before decalre in print that's why the address is temporary
								//so it start from b's first or original address
								//after q-1 address of b becomes 68-4=64 it's temporary also just to print
Value Of b is after +1: 9 //*q+1 here mean q=8 so 8+1=9 						

Value Of c is: 9
Address Of c is: 6684156
Address Of c is after ++: 6684156 //if we mention p++ under printf it means it first print address at p then it will automaticall 
								  //add size of 1 int on next
Address Of c is after --: 6684160 // that's why here it prints actual value of p++ 	
Address Of c is at last: 6684156 //and because in previous printf p-- that's why it's print value of p-- on next also
*/

#include<stdio.h>
int main(){
	char a='7';
	char *p = &a;
	printf("\nAddress Of a is: %d", p);
	printf("\nAddress Of a is after +1: %d", p+1); //pointer always print in %d,%x,%p
	return 0;
}

/*
Address Of a is: 6684183
Address Of a is after +1: 6684184

here we took change 83 to 84 because size of char is 1

*/
