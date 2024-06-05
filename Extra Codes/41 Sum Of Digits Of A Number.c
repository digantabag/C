/*
Sum Of Digits Of A Number
*/
#include<stdio.h>
int main(){
	int n,s=0,r;
	printf("\nEnter The Number: ");
	scanf("%d",&n);
	
	while(n!=0){
		r=n%10;
		s=s+r;
		n=n/10;
	}
	
	printf("Sum Of Digits Are: %d",s);
	
	return 0;
}
/*
output:
Enter The Number: 12345
Sum Of Digits Are: 15
*/
/*
explainations:
Enter The Number: 123
Sum Of Digits Are: 6

first of  all here all we took is int not float
that's why output will be an integer
example: if we use float then 123/10 returns 12.3
because we use int that's why 123/10 return 12 and 3 as remainder

while loop runs until n become 0, when n=0 loop ends
entered number

n=123

10|123|12
  -10
---------
	23
   -20
---------
	 3

here r=n%10=123%10=3
and s=s+r=0+3=3
and n=n/10, 123/10 because n int here so it returns 12 as output not [12.3 because n is not float here]
n=12

loop continue because n=12

n=12

10|12|1
  -10
  ----
	2

now r=2
s=s+r=3+2=5
n=12/10=1, because n int here so it returns 1 as output not [1.2 because n is not float here]

loop continue because n=1

10|1|0
  -0
------
   1
or n=0.1
here n=0, and r=1
s=5+1=6

loop ends because n=0 now
print s = 6

summery
123/10=12.3 here n=12,r=3,s=0+3=3
12/10=1.2 here n=1,r=2,s=3+2=5
1/10=0.1 here n=0,r=1,s=5+1=6
*/
