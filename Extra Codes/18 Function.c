//function are used to divide large c program into smaller pieces
//function can avoid rewriting same logic through program
//function can be called multiple times to provide reusability to the c program
//function declaration mean , function is declared to tell a comiler about its existence
//exampler int star(){}
//function definition mean, function is defined to get some task done
//exampler int star(){code to be executed this part called define}
//function call mean. function is called in order to be used
//int main(){int star();} function call
/* 
like for a simple calculator funtion can be
simplecalculator(){
sum();
subtract();
multiply();
divide();
return0;
}
sum(){function work or code mention here}
subtract(){}
multiply(){}
divide(){}


function syntax
dt-> datatype
p-> parameter or variable
rt->return type like int main
rt function_name(dt p1,dt p2,...){code to be executed}
int star(can be empty if we mention these under function){print("*");return 0;}
if we use void main() in that case return 0; is not mandatory but for intmain() its mandatory
*/
/*
types of function
1. library function > functions include in c header files(preprocessor)
example: clrscr() in conio.h, exit(0) in stdlib.h, printf("") in stdio.h
2. User defined functions > functions created by c programmer to reduce colmplexity of a program
int star(){print("*");return 0;} man made funtion
//funtion code examples
1. without argument and without return value
2. without argument and with return value
3. with argument and without return value
4. with argument and with return value

int star(argument mean think int a and value of a is given on main then with argument){
code to be executerd
return value
}

*/

//function needs to declarationmust be before call in main function
//function defination can be done before main function with declaration or can be done after call in main function

//with argument and with return value

#include<stdio.h>

int sum(int a, int b){ //function declare with define //here int a and b is formal parameter/arguments
	return a+b; // here reurn type given so with return value
}

int main()
{
	int a,b,c;
	a=22; //here value of a and b is given so with argument
	b=7;
	c=sum(a,b);	//function call
	printf("\nSum: %d",c);
	return 0;
}

//or

#include<stdio.h>

int sum(int a, int b);//funtcion declare here only but not define

int main()
{
	int a,b,c;
	a=22;
	b=7;
	c=sum(a,b);	
	printf("\nSum: %d",c);
	return 0;
}

int sum(int a, int b){ //function define here
	return a+b;
}

//or

#include<stdio.h>

int sum(int a, int b){ //function declare with define
	return a+b; // here reurn type given so with return value
}

int main()
{	
	int c;
	c=sum(1,2);	//function call //in that way argument can also be given it gives reyrn 1+2=3;
	printf("\nSum: %d",c);
	return 0;
}

//with argument & without return value

#include<stdio.h>

void star(int n){
	for(int i=0;i<n;i++){
		printf("%c ",'*'); //if we give only i it print 0 to n it print 1 2 3 4 5 6 7
	}                     // but here we can get n number of stars it print * * * * * * *
	//no return here so without return value
}

int main()
{
	int n; 
	n=7;//here value of n is given so with argument
	star(n);	//function call //	//or direct star(7)
	return 0;
}

//or

#include<stdio.h>

void star(int n){
	for(int i=0;i<n;i++){
		printf("%c ",'*'); //if we give only i it print 0 to n it print 1 2 3 4 5 6 7
	}                     // but here we can get n number of stars it print * * * * * * *
}						 //star in single coat ' only it remains char if we use double coat " then it becomes string	

int main()
{
	star(7);	//function call & here also pass value of n direct in fuction call 
				//star(7); mean int n=7; //inprevious also we can do for sum(1,2);
	return 0;
}


//without argument and with return value

#include<stdio.h>

int getval(){
int i;//argument not given in main()
printf("\nEnter Value: ");
scanf("%d",&i);//here we take argument from user
return i;//have return type so with return value
}

int main()
{
	int c;
	c=getval(); //argument not given here so without argument	
	printf("\nNumber Is: %d",c);
	return 0;
}


//without argument & without return value

#include<stdio.h>

void sum(){
	int a,b;
	printf("\nEnter number a: ");
	scanf("%d",&a);
	printf("\nEnter number b: ");
	scanf("%d",&b);
	printf("\nThe sum is: %d",a+b); 
	//no return here so without return value
}

int main()
{
	sum();	//no argument passed so without argument
	return 0;
}
