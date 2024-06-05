//loops
/*
advantages
1. code reusibility
2. saves time
3. traversing (find in array, to traverse array)

loop > check condition if true> execute loop > repeat until loop condition fails
                       if false> end loop

type
1. do while
2. while
3. for
*/

/* 
1.do while
do{
		code to be executed;
	}while(condition);

do 'this' while 'that' condition occurs
do 'this' until while condition failed
do while loop atleast executes 1
*/
/*
#include<stdio.h>
int main(){
	int i;
	i=0;
	do{
		i++;//or i=i+1 or i+=1
		printf("%d ",i);
		}while(i<10);
	
	printf("\n");
	
	int j;
	j=0;
	do{
		printf("%d ",j);
		j++;//or j=j+1 or j+=1
		}while(j<10);

return 0;
}
*/

/*for do while loop first output is 1 
because here 0 in but not out, then 0+1=1 and 1 out
and at end
last out put is 10,
because last is 9 which enter in do loop and it also 9<10 in while condition
so at end 9 enter at end, then 9+1=10, 10 out, then condition while(i<10); execute again and fail because next is 10 which is
equal to 10 and now condition fail and program end with output 1 to 10,
if there while(i<=10) then last output is 11 

if we write
do{
		printf("%d ",i)
		i++;
		}while(i<10);

in that case firt output is 0 then 0+1=1 then go until 9
0
0+1=1
1+1=2
.
.
.
8+1=9 last output
9+1=10 condition failed here so that doesn't print

for i=0 while i<10
if we give i=i+1 before printf it will give output from 1-10
if we give i=i+1 after printf it will give output from 0-9
*/

//while loop
/*while(condition){
					code to be executed
				   }
*/
/*
#include<stdio.h>
int main(){
	int i;
	i=0;
	while(i<10){
		printf("%d ",i);
		i++;
		}
return 0;
}
*/
/*
output be like
0 then 0+1=1 ....8+1=9,
9+1=10 condition fails not print

while(1){} mean infinite while loop
*/

//for loop
/*
for loop used for iterate a part of program several times
thing theres a string 'abcd'
if we want to use every part of the string seperately like a,b,c,d. in that case we use for loop we discuss it later
*/
/*
for(exp1;exp2;exp3){
code to be executed
}
exp is expression
exp1
exp1 be like where condition start from i=0 
we also didn't have to give exp1 if we declare value of i=0 in previous while or after declaring variable
but still we have to give ; before exp2 or in place of exp1

exp2
exp2 be like where condition end i<10
exp2 is condition expression
think theres have to two condition in exp2 if we didn't give 2nd condition then the 2nd variable give same output until first condition becomes false
it's optional until we use break statement otherwise it becomes infinite loop we discuss about it later

exp3
exp3 be like how condition goes i++
we didn't have to mention exp 3 if we declare it under for loop or in code to be executed section
here also we have to give ; in place of exp3 or after exp2
if we didn't mention exp3 in or under for loop it will become an infinite loop
we can give multiple condition in exp

exp 1 condition start
then exp 2 condition true then code executed then output print then it goes as mention in exp 3
again then code executed if exp 2 condition failed then program end otherwise go to exp3

exp1 is initializing of for loop
*/

#include<stdio.h>
int main(){
	int i;
	
	//with exp1
	for(i=0;i<10;i++){
		printf("%d ",i);
	}
	
	
	printf("\n");
	
	//without exp 1 or exp1 declared before
	int j=1;
	for(;j<=10;j++){
		printf("%d ",j);
	}
	
	printf("\n");
	//with multiple exp condition
	int a,b;
	for(a=0,b=10;a<=10,b>=0;a++,b--){//if we didn't give b>=0 condition then it will give same output b=-1 until condition a<=0 becomes false
	
		printf("%d %d\n",a, b);
	}
	
	printf("\n");
	//here we didn't give one condition in exp2
	int d,e;
	for(d=0,e=10;d<=10;d++,e--){//because here we didn't given condion for e in exp2 that's why e run until condition of d ends with same output e-- or e-1=-1
		printf("%d %d\n",a, b);
	}
	
	
	printf("\n");
	int c;
	//without exp3,exp3 here mention under for loop condition or after or before line of printf 
	//if we didn't mention exp3 in or under for loop it will become an infinite loop
	for(c=0;c<10;){
		printf("%d ",c);//we can also write it as printf("%d ",c++) instead of giving c++; under
		c++;//if we didn't give c++ output become infinite 0
	}
	
	return 0;
}

//nested loop mean loop under a loop, a for loop also under a another for loop

#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){ //if we don't give less than in i<=100 then it'll become an infinite loop
						//so we have to type i<=100 not i=100
		printf("%d ",i);
	}
	return 0;
}