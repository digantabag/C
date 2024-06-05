//goto statement
/*
label:
print.....
if condition
goto label;

goto label mean program will again start from label:

again:
print
here:
print
if goto again;
else goto here;

goto again start form agian lebel, or execute every code under again: 
and goto here start form here lebel, or execute every code under here:  
*/
//if we didn't give go to under a condition or if statement then it will print infinite output, or it becomes an infinite loop
//goto statement is preferable when we need to break multiple loops using a single statementat the same time
/*
#include<stdio.h>
int main(){
	int a,b,c;
	again:
	printf("\nEnter 1st Number: ");
	scanf("%d",&a);
	printf("\nEnter 2nd Number: ");
	scanf("%d",&b);
	printf("\nThe sum is: %d\n",a+b);
	here:
	printf("\nDo You Want To Sum Again\nPress 1 for Yes\nPress 0 for No\nEnter Your Choice: ");
	scanf("%d",&c);
	if(c==1){
		goto again;//if we didn't give go to under a condition or if statement then it will print infinite output
		printf("\n");
	}
	else if(c==0){
		printf("\nThank You, Bye...");
	}
	else {
		printf("\nInvalid input");
		goto here;
		printf("\n");
    } 
	
	return 0;
}
*/
/*
Enter 1st Number: 1

Enter 2nd Number: 2

The sum is: 3

Do You Want To Sum Again
Press 1 for Yes
Press 0 for No
Enter Your Choice: 1 //because user press 1, thats why program again repeatly started from label again:

Enter 1st Number: 2

Enter 2nd Number: 3

The sum is: 5

Do You Want To Sum Again
Press 1 for Yes
Press 0 for No
Enter Your Choice: 5 //because user press an invalid number, thats why program again repeatly started from label here: and ask user again if he want again or not

Invalid input
Do You Want To Sum Again
Press 1 for Yes
Press 0 for No
Enter Your Choice: 0 //because user press 0, end

Thank You, Bye...
*/

//if we didn't give go to under a condition or if statement then it will print infinite output
//thats not true when goto end; and end: label is at end of program or before return 0;
//that's why goto statement also help us to exit from nested loop where break can't
#include<stdio.h>
int main(){
	int i,j,a;
	for(i=0;i<10;i++){
		printf("%d ",i);
			for(j=0;j<1;j++){ //if we give j<2 then it will get 2 age input under i=0 then again 2 age input under i=1..
			printf("\nEnter Age Or Press 0 For Exit: ");
			scanf("%d",&a);
			if(a==0){
				goto end;
			}
		}
	}
	end:
	return 0;
}
/*
0
Enter Age Or Press 0 For Exit: 1
1
Enter Age Or Press 0 For Exit: 2
2
Enter Age Or Press 0 For Exit: 3
3
Enter Age Or Press 0 For Exit: 4
4
Enter Age Or Press 0 For Exit: 0

--------------------------------
*/