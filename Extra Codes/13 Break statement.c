//breaks statement
//break here used to bring program controll out of the loop
//think think user can enter infinite amount of name until he type exit on place of name or, a if condition under while loop if name=='exit'
/*while{
-----
if
break;}
*/
//break can be used with loops or switch

#include<stdio.h>
int main(){
	int i,a;
	for(i=0;i<10;i++){//for single output we didn't have to give curly braces for multiple output we have to give, anyway give it for better understanding and safety
	printf("%d Enter Age: ",i);
	scanf("%d", &a);
	if(a>10){
		break;
	}
	}
	return 0;
}
/*normally program will run
out put be like
0 Enter Age: 1
1 Enter Age: 2
2 Enter Age: 3
3 Enter Age: 4
4 Enter Age: 10
5 Enter Age: 11 

here loop will continue until use give age value greater than 10
because 11>10 so it end the loop totally
if  user enter age value less than 10 then loop will continue until i<10
when if condition fail break throw you out from that loop

0 Enter Age: 1
1 Enter Age: 2
2 Enter Age: 3
3 Enter Age: 4
4 Enter Age: 5
5 Enter Age: 6
6 Enter Age: 7
7 Enter Age: 8
8 Enter Age: 9
9 Enter Age: 9

for nested loop there a loop under b loop
if theres a break condition in a loop in that case break throw you out of a loop but you still under b loop
*/
