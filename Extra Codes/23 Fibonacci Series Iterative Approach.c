//fibonacci series
/* 
series: 0 1 1 2 3 5 8
here 0+1 = 1 
now 1+1=2
1+2=3>2+3=5>3+5

rule: previous number _ number _ next number 
rule is: next number = number + previous number
*/
//iterative approach

#include<stdio.h>
int main(){
	int l, f, s, i, t,n;
	printf("\nEnter Length OF Series: ");
	scanf("%d",&l);
	printf("\nEnter First Number: ");
	scanf("%d",&f);
	printf("\nEnter Second Number: ");
	scanf("%d",&s);
	printf("\nFibonacci Series: %d %d ",f,s);
	n=f+s;
			printf("%d ",n);
	for(i=3;i<=l;i++){

		f=s;
		s=n;
		n=f+s;
				printf("%d ",n);
	}
	return 0;
}
/*
Output:
Enter Length OF Series: 7

Enter First Number: 0

Enter Second Number: 1

Fibonacci Series: 0 1 1 2 3 5 8
*/

/*
logic;
f=0
s=1
print 0 1
now before loop n=f+s=0+1=1
in loop first print n=1
now f=s, mean f's last value change to s's last value,
f=0 & s=1 > now f=s mean f=1 no 0 anymore
now s=n; mean s's last value change to n's last value,
so s=1 and n=1 > now s=n mean s=1
now n=f+s=1+1=2

print 0 1 1

looped
again print n=2
now f=s > f=1 & s=1 > f=1
now s=n > s=1 & n=2 > s=2
now n=f+s=1+2=3

print 0 1 1 2
that's way loop goes i=3;i<=l because here i start form 1 not 0, if 0 then we can also written it as i=2;i<5
privious or first 2 number of series print already before loop and we have start from 3rd place  for loop that's why we give i=3
if we start from i=0 then 0 1 2, 2 is the 3rd place and if we start from i=1, 1 2 3, 3 is the 3rd place
we can also write it as for(i=0;i<=l-3;i++) or for(i=1;i<=l-2;i++)
*/
//or//using while loop

#include<stdio.h>
int main(){
	int l, f, s, i, t,n;
	printf("\nEnter Length OF Series: ");
	scanf("%d",&l);
	printf("\nEnter First Number: ");
	scanf("%d",&f);
	printf("\nEnter Second Number: ");
	scanf("%d",&s);
	printf("\nFibonacci Series: %d %d ",f,s);
	n=f+s;
	i=3;
	while(i<=l){
		printf("%d ",n);
		f=s;
		s=n;
		n=f+s;	
		i++;
	}
	return 0;
}

