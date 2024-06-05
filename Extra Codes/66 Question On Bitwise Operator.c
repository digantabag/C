/*
bitwise operator(&and |or ^xor) hackerrank question
for more info check program no.4.4 bitwise opereator & no.54 find big and small no. from an array 
question logic:
n=3
k=3

a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1

here a run <3 a=1,2
and b runs like and <=3 but never a=b

For the and comparison, the maximum is 2. 
For the or comparison, none of the values is less than k, so the maximum is 0. 
For the xor comparison, the maximum value less than k is 2. The function should print:

2
0
2
*/
#include<stdio.h>
int main(){
	int n,k,mand=0,mor=0,mxor=0,a,b,c;
	int i,j;
	printf("\nNumber: ");
	scanf("%d",&n);
	printf("\nThreshold: ");
	scanf("%d",&k);
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			a=i&j;
			b=i|j;
			c=i^j;
			if(a>mand && a<k){
				mand=a;
			}
			
			if(b>mor && b<k){
				mor=b;
			}
			
			if(c>mxor && c<k){
				mxor=c;
			}
		}
	}
	
	printf("\nmand=%d\nmor=%d\nmxor=%d",mand,mor,mxor);
	return 0;
}
/*
output:

Number: 3

Threshold: 3

mand=2
mor=0
mxor=2
*/
/*
loop goes like
when
here i=a,j=b
i=1 > j=2,3
i=2 > j=3
i=3 > j=4 so loop failed here because j<=3
for max finding check program no.54 but here an additional condion is max only applicable when max is less than k 
*/
