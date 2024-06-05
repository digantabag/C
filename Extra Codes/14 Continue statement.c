//continue statement
//continue statement is used for a condition so that we can skip some lines of code for a particular condion
/*think a bar where only 18+ allowed others not allowed
a person go age 18 continue condition true
a person go age 19 continue condition true
a person go age 12 condition failed that's why we say no entry to him
*/ 

#include<stdio.h>
int main(){
	int i,a;
	for(i=0;i<10;i++){
		printf("%d Enter Age: ",i);
		scanf("%d",&a);//if we give a space after %d_ that will occurs an erron in output input taking
		if(a>=18){
			printf("Continue, Next...\n");
			continue;
		}
		//if condition true or age is 18+ then this printf didn't execute
		printf("No Entry You Are Under 18, Next...\n");
		//if condition failed or age under 18 then this lone print
		//continue is comman work as like as  vip pass, we passed directly without execute next line
	}
	return 0;
}

/*
loop start condition start 
condition true continue next line skip
go back to loop again i++
condition false next line print
again go back to loop 
condition check
this all happen until loop condition failed or until i=10

0 Enter Age: 18
Continue, Next...
1 Enter Age: 25
Continue, Next...
2 Enter Age: 12
No Entry You Are Under 18, Next...
3 Enter Age: 32
Continue, Next...
4 Enter Age: 11
No Entry You Are Under 18, Next...
5 Enter Age: 15
No Entry You Are Under 18, Next...
6 Enter Age: 18
Continue, Next...
7 Enter Age: 32
Continue, Next...
8 Enter Age: 69
Continue, Next...
9 Enter Age: 10
No Entry You Are Under 18, Next...
*/

//continue and break state only use under if condition in {} in loop, not outside if condition in loop