/*
binary to decimal
*/
#include<stdio.h>
#include<math.h>
int main(){
	int a[100],n,i=0,j,s=0,t;
	printf("\nBinary: ");
	scanf("%d",&n);
	
	while(n>0){
		a[i]=n%10;
		n=n/10;
		t=a[i]*pow(2,i);//pow(2,3)mean 2 to the power 3 or 2^3=8		
		//if we give pow(8,1) then it convert octal into decimal
		s=s+t;
		i++;
	}
	
	/*
	for(i=i-1;i>=0;i--){
		t=pow(2,i);//pow(2,3)mean 2 to the power 3 or 2^3=8
		s=s+(a[i]*t);
}
*/
printf("\nDecimal: %d",s);
	return 0;
}
/*
output:
Binary: 1100
Decimal: 12
*/
/*
explanation:
binary 1100
1	1	0	0
=>1*2^3 + 1*2^2 + 0*2^1 + 0*2^0=>8+4+0+0=>12 [2^0=1 & 2^1=2]

	while(n>0){
		a[i]=n%10;
		n=n/10;
		t=a[i]*pow(2,i);//pow(2,3)mean 2 to the power 3 or 2^3=8
		s=s+t;
		i++;
	}

i=0,s=0,n=1100
a[0]=n%10=1100%10=0
n=1100/10=110
t=a[i]*pow(2,i)=a[0]*2^0=0*1=0
s=s+t=0+0=0

i=1,s=0,n=110
a[1]=n%10=110%10=0
n=110/10=11
t=a[i]*pow(2,i)=a[1]*2^1=0*2=0
s=s+t=0+0=0

i=2,s=0,n=11
a[0]=n%10=11%10=1
n=11/10=1
t=a[i]*pow(2,i)=a[2]*2^2=1*4=4
s=s+t=0+4=4

i=3,s=4,n=1
a[3]=n%10=1%10=1
n=1/10=0
t=a[i]*pow(2,i)=a[3]*2^3=1*8=8
s=s+t=4+8=12

now n=0 loop ends
decimal s=12
	
	
	

*/
