/*
Decimal to Binary
*/
#include<stdio.h>
int main(){
	int a[100],n,i=0;
	printf("\nDecimal: ");
	scanf("%d",&n);
	
	while(n>0){
		a[i]=n%2; //if we type n%2 &
		n=n/2; // if we type n/2 it's be convert into a octal number
		i++;
	}
	
	printf("\nBinary: ");
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
	
	return 0;
}
/*
Output:
Decimal: 12
Binary: 1100
*/
/*
Explanation:
decimal 12
2 | 12	rem
2 |	6 - 0
2 | 3 - 0
2 | 1 - 1
2 | 0 - 1

binary 1100

	while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;
	}
	
here
i started from 0
i=0
so a[0]=n%2=12%2=0
	n=12/2=6 

i=1
so a[1]=n%2=6%2=0
	n=6/2=3

i=2
so a[2]=n%2=3%2=1
	n=3/2=1

i=3
so a[3]=n%2=1%2=1
	n=1/2=0
	i++ so i=4
	n=0 so loop ends and, i=4
	
for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
	
i print from 0 to 3
i=3,2,1,0
a[3,2,1,0]=1100

binary: 1100
 
*/
