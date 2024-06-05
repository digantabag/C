/*
Ascending Order
inspired by *swapping *program no. 32 & fibonacci series p23
*/
#include<stdio.h>
int main(){
	int a[100],i,n,j,t;
	printf("\nEnter Total Numbers You Want To Enter: ");
	scanf("%d",&n);
	printf("\nEnter Numbers...\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nAll Numbers:");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	
	for(i=0;i<n;i++){//loop1
		for(j=i+1;j<n;j++){//loop2
			if(a[i]>a[j]){//if we give if(a[i]<a[j]) it will make the array in descending order
							//or we can create a descending order by revarsing an ascending order
				//swap
				t=a[i];
				a[i]=a[j];
				a[j]=t;			
			}
		}
	}
	
	printf("\nAscending Order:");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	
	return 0;
}
/*
output;
Enter Total Numbers You Want To Enter: 5

Enter Numbers...
a[0]: 3
a[1]: 5
a[2]: 4
a[3]: 1
a[4]: 2

All Numbers: 3 5 4 1 2
Ascending Order: 1 2 3 4 5
*/
/*
explanation:
input n=5
a[0]: 3
a[1]: 5
a[2]: 4
a[3]: 1
a[4]: 2

loop 1 & 2
i=0
so j=1,2,3,4

i=0 => a[0]=3
j mean a[j]
a[0]=3									|now a[0]=1
j=1 		| j=2 		| j=3 			| j=4

a[1]=5		|a[2]=4		|a[3]=1    		|a[4]=2
3<5 skip	|3<4 skip	|3>1			|1<4 skip
						|a[0]>a[3]
						|by swapping
						|a[0]=1 &a[3]=3 
						
now
a[0]=1,a[1]=5,a[2]=4,a[3]=3,a[4]=2
i=1;
so j=2,3,4;
a[1]=5			|a[1]=4			|a[1]=3			|now a[1]=2
j=2				|j=3			|j=4

a[2]=4;			|a[3]=3			|a[4]=2
5>4				|4>3			|3>2
a[1]>a[2]		|a[1]>a[3]		|a[1]>a[4]
by swapping		|by swapping	|by swapping
a[1]=4 &a[2]=5	|a[1]=3 &a[3]=4 |a[1]=2 &a[4]=3

now
a[0]=1,a[1]=2,a[2]=5,a[3]=4,a[4]=3
i=2;
so j=3,4

a[2]=5			|a[2]=4			|now a[2]=3
j=3				|j=4

a[3]=4			|a[4]=3
5>4				|4>3
a[2]>a[3]		|a[2]>a[4]		
by swapping		|by swapping
a[2]=4 &a[3]=5  |a[2]=3 &a[4]=4

now
a[0]=1,a[1]=2,a[2]=3,a[3]=5,a[4]=4

i=3;
j=4;

a[i=3]=5>a[j=4]=4
by swapping
a[4]=5 & a[3]=4

loop ends because i,j<n=5
and final array is 
a[0]=1,a[1]=2,a[2]=3,a[3]=4,a[4]=5
or 1,2,3,4,5
*/
