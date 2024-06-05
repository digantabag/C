/*
digits freq
*/
#include<stdio.h>
int main(){
	int ld,i,f[10]={0};
	long long int n;
	printf("\nEnter The Number: ");
	scanf("%lld",&n);	 
	
	while(n!=0){
		ld=n%10;
		f[ld]++;
		n=n/10;
		};
		
	for(i=0;i<10;i++){
		printf("\nFreq Of %d is: %d",i,f[i]);
	}
	
	return 0;
}
/*
output;
Enter The Number: 7431868611

Freq Of 0 is: 0
Freq Of 1 is: 3
Freq Of 2 is: 0
Freq Of 3 is: 1
Freq Of 4 is: 1
Freq Of 5 is: 0
Freq Of 6 is: 2
Freq Of 7 is: 1
Freq Of 8 is: 2
Freq Of 9 is: 0
*/
/*
we use long long int to take more than 10 numbers
f[10]={0} mean every element is 0
or
f[0,1,2,3.....,8,9]=0;
input 12230
for more details check 41 sum of all digit program

loop runs until n=0
ld is last digit and n reduced n/10
and f[ld]++ mean

if ld=1
so f[1]++ mean f[1]+1=0+1=1

so first
ld 0 n=1223
so f[0]++ and f[0]=1

2nd ld=3 n=122
so f[3]++ and f[3]=1

3rd ld=2 n=12
so f[2]++ and f[2]=1

4th ld=2 n=1
so f[2]++ and f[2]=1+1=2

5th ld=1 n=0 loop ends
so f[1]++ and f[1]=1

values of f arrays print f[0,1,2,3,....8,9];
where
f[0]=1
f[1]=1
f[2]=2
f[3]=1
*/
