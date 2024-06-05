//if else statement --> control statement
/* statements
1. if
2. if else
3. if else if
4. nested if
*/
#include<stdio.h>
int main(){
	int a, b;
	printf("\nEnter 1st Number: ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number: ");
	scanf("%d",&b);
	if(a>b){
		printf("\n%d > %d",a,b);
	}
	else 
	if(b>a){
		printf("\n%d > %d",b,a);
	}
	else
	if(a==b){//we always have to use double == for side by side otherwise show error
		printf("\n%d = %d",a,b);
	}
	else{
		printf("\nInvalid Input!");
	}
	return 0;
}
//if we didnt give else statement, and if previous if condition didn't match or false then simply out put will be null value  
//and if previous if condion match then it successfully print the output
