/*
Fibonacci series using recursion
for recursion we have to start from 0 and 1 only
*/

#include<stdio.h>
int fr(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (fr(n-1) + fr(n-2));
	}
}

int main(){
	int l,i;
	printf("\nEnter Length Of Series: ");
	scanf("%d",&l);
	printf("\nFibonacci Series: ");
	for(i=0;i<l;i++){
		printf("%d ",fr(i));
	} 
	return 0;
}

/*
Output:
Enter Length Of Series: 7
Fibonacci Series: 0 1 1 2 3 5 8

i=0;f(0) -> return 0 so f(0)=0
i=1;f(1) -> return 1 so f(1)=1
i=2;f(2) -> return f(2-1)+f(1-1) -> f(1)+f(0) ->1 + 0 [because previous we can get f(1)=1 and f(0)=0] so f(2)=1
i=3;
	f(3)
	=f(3-1)+f(3-2)=f(2)+f(1)=1[becasue f(2)=1 in previous]+1=2 so f(3)=2
i=4;
	f(4)
	=f(4-1)+f(4-2)=f(3)+f(2)=2+1=3 so f(4)=3
i=5;
	f(5)
	=f(4)+f(3)=3+2=5 so  f(5)=5
i=6;
	f(6)
	=f(5)+f(4)=5+3=8 so f(6)=8

so that's how step goes
*/

/*
in recursive approach
here we can see every step have to perform again and again
f(0),f(1)
f(2)->f(1)+f(0)
f(3)->f(2)+f(1)->f(1)+f(0)+f(1)
f(4)->f(3)+f(2)->f(2)+f(1)+f(1)+f(0)->f(1)+f(0)+f(1)+f(1)+f(0)
f(5)->f(4)+f(3)->f(3)+f(2)+f(2)+f(1)->f(2)+f(1)+f(1)+f(0)+f(1)+f(0)+f(1)->f(1)+f(0)+f(1)+f(1)+f(0)+f(1)+f(0)+f(1)
in recursive, every part calculate again and again that's why in recursive process took more time than iterative

check no.23 program
because in iterative
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

here just every part looped and go, not have to calculate every step that's why

iterative approach is faster than recursive approach
but recursive reduce code lines than iterative sometimes 
like in finding factoirial with recursion approach easier than iterative approach
so by experience programmer can decide whether he use recursive or iterative
*/
