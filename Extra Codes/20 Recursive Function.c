//recursion is a process, where function can call his copy or himself in his body to  work on smaller problem
//recursion makes program easy by dividing a given problem into easier problems
//like if we want find factorial of 5
/*
then
5! > 5x4! > 5x4x3! > 5x4x3x2! > 5x4x3x2x1!
it's break problem until it's get multiple or single base problems of big problem
like in previous 5x4x3x2x1 here for 1 or 0 it's the base problem
another example 4 > 2+2 > 1+1+1+1
*/
//any problem that can be solved recursively, can also be soled iteratively
//iterstively mean as normal we can do or step by step, not using recursion
//in iteration can contain multiple condition but in easy way recursion can call again and again automatically until condition fails
//recursive function is best for example, tower of hanoi, fibonacci series, factorial finding etc...
//base case occurs at parameter value 0 or 1


//using recursive stratagy

#include<stdio.h>
int factorial(int n){
						if(n==1 || n==0){
							return 1; 	//when n=1 it's the base level so here function end with return 1, we give 1 for 0 because if 0 comes then it makes whole factorial 0
						}
						else {
							return n*factorial(n-1);	//recursion
						}
}
int main(){
	int c;
	printf("\nEnter The Number Whiose Factorial You Want To Find: ");
	scanf("%d",&c);
	printf("\nFactorial Of %d Is: %d",c,factorial(c));
	return 0;
}

/*output
Enter The Number Whiose Factorial You Want To Find: 5
Factorial Of 5 Is: 120

1st come 5 then 5*5-1 or 5*4 then 5*4*4-1 then 5*4*3*3-1 then 5*4*3*2*2-1 
here at the end final number is n=2-1=1 so according to if condition it return only 1 (not return n*factorial(n-1);) so 
at the end	final return is 5*4*3*2*1=120 and it's the output

error: for long number it can show error [max small 31]
example
Enter The Number Whiose Factorial You Want To Find: 99 
Factorial Of 99 Is: 0

*/

//iterative stratagy
#include<stdio.h>
int main(){
	int i,c,f=1;
	printf("\nEnter The Number Whiose Factorial You Want To Find: ");
	scanf("%d",&c);
	for(i=1;i<=c;i++){
		f=f*i;
	}
	printf("\nFactorial Of %d Is: %d",c,f);
	return 0;
}

/*
output:
Enter The Number Whiose Factorial You Want To Find: 5
Factorial Of 5 Is: 120

here we give f=1 as start 
and i start from 1
first loop f=f*i it means f=1*1 because at i=1 at start > i++ so i=2 and f=f*i mean f=1*2 here
value of f is changed to 2, f=2 and next when i++ > i=3, here f=f*i mean f=2*3 in that way it goes
and at the end f=24*5=120 then i++ and i=6 here condition fail because 6>5 and final f is the answer which is f=120 */

//recursive approach is slower than iterative approach