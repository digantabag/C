//switch case
/*
rules
1. switch variable must be int or char, not float
2. case value must be int or char
3. case must come switch
4. break is must otherwise every didn't matched next case will be executed
example
if case 1 have no break and matched then case 1 & 2 automatically executed 
if there have a break in case 2 then it will not execute next case3

if  case 1 have break and matched then case 1 executed
and if case 1 have break and not matched then case 2 executed  

nested switch means, switch under a case of another switch
*/

#include<stdio.h>
#include<stdlib.h> //here for exit(0)
int main(){
	int n;
	float a,b,c;
	printf("\nWelcome To Simple Calculator...");
	printf("\n-----------------------------");

	printf("\nPress\n1 for Summation\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Quit\nKindly Enter Your Choice: ");
	scanf("%d",&n);
	if(n>5 || n<1){
	printf("\nInvalid Input!");
	}
	else if(n==5){ //if we use char then we have to write n=='5' or n=='y'
		printf("\nThank You, Bye...");
		exit(0); //we didn't use break in if statement
					// that's why i use exit(0) statement as close statement it is as same as return 0
					// for exit(0), we have to use #include<stdlib.h> lobrary
		//return 0;//we can also use return 0 instead of exit(o);
	}
	else{
	printf("\nEnter The 1st Number: ");
	scanf("%f",&a);
	printf("Enter The 2nd Number: ");
	scanf("%f",&b);
	switch(n){
		case 1: c=a+b;
				printf("\nSum = %.f\n",c);
				break;
		
		case 2: c=a-b;
				printf("\nSubtract = %.f\n",c);
				break;
		
		case 3: c=a*b;
				printf("\nMultiply = %.f\n",c);
				break;
		
		case 4: c=a/b;
				printf("\nDivide = %.3f\n",c);
				break;
		
		case 5: break;
		
		default:break;
	}
	printf("\nThank You For Using Simple Computer...");
}

	return 0;
}