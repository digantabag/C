/*
print nth term
here n will be sum of previous 3 elements
inspired by fibonacci series
check 23 no. program for more details about fibonacci
*/
#include<stdio.h>
int main(){
	int l, f, s, i, t,n;
	printf("\nEnter Term Number: ");
	scanf("%d",&l);
	printf("\nEnter First Number: ");
	scanf("%d",&f);
	printf("\nEnter Second Number: ");
	scanf("%d",&s);
	printf("\nEnter Third Number: ");
	scanf("%d",&t);
	n=f+s+t;

if(l==1){
        printf("\n%dst term is %d",l, f);
    }
else if(l==2){
        printf("\n%dnd term is %d",l,s);
    }
else if(l==3){
        printf("\n%drd term is %d",l, t);
    }
else {
    for(i=4;i<l;i++){
        f=s;
        s=t;
        t=n;
        n=f+s+t;    
    }
    printf("\n%dth term is: %d",i,n);
    }
    return 0;

}
/*
output:
Enter Term Number: 5

Enter First Number: 1

Enter Second Number: 2

Enter Third Number: 3

5th term is 11
*/
