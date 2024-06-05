/*
Descending Order
inspired by *swapping *program no. 32 & fibonacci series p23
we can create a descending order by revarsing an ascending order also
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
			if(a[i]<a[j]){
				//swap
				t=a[i];
				a[i]=a[j];
				a[j]=t;			
			}
		}
	}
	
	printf("\nDescending Order:");
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
Descending Order: 5 4 3 2 1
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
a[0]=3			|now a[0]=5					
j=1 			| j=2 		| j=3 			| j=4

a[1]=5			|a[2]=4		|a[3]=1    		|a[4]=2
3<5 			|5>4 skip	|5>1 skip		|5>2 skip
a[i=0]<a[j=1]				
by swapping
a[0]=5 &a[1]=3 
						
now
a[0]=5,a[1]=3,a[2]=4,a[3]=1,a[4]=2
i=1;
so j=2,3,4;
a[1]=3			|now a[1]=4	
j=2				|j=3			|j=4

a[2]=4;			|a[3]=1			|a[4]=2
3<4				|4>1 skip       |4>2 skip
a[1]<[2]		
by swapping		
a[1]=4 &a[2]=3	

now
a[0]=5,a[1]=4,a[2]=3,a[3]=1,a[4]=2
i=2;
so j=3,4

a[2]=3			
j=3				|j=4

a[3]=1			|a[4]=2
3>1 skip        |3>2 skip

so a[2] remain unchanged


now
a[0]=5,a[1]=4,a[2]=3,a[3]=1,a[4]=2

i=3;
j=4;

a[i=3]=1<a[j=4]=2
by swapping
a[4]=1 & a[3]=2

loop ends because i,j<n=5
and final array is 
a[0]=5,a[1]=4,a[2]=3,a[3]=2,a[4]=1
or 5,4,3,2,1
*/
