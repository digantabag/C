/*
30 Fibonacci Series Iterative V/s Recursive Approcah
*/
#include<stdio.h>
void fi(int n){
	int f=0, s=1,i,u;
	printf("%d %d ",f,s);
	for(i=3;i<=n;i++){
		u=f+s;
		f=s;
		s=u;
		printf("%d ",u);
	}

}

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
	printf("\nFibonacci Series Using Iterative Approach: ");
	fi(l);
	printf("\nFibonacci Series Using Recursive Approach: ");
	for(i=0;i<l;i++){
		printf("%d ",fr(i));
	} 
	return 0;
}
/*
Itertaive Approach Is Faster Than Recursive Approach Look in Details At Soluntion No.29
*/
