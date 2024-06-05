/*
Passing Array As Function
*/
//passing array as function arguments by declaring array as a parameter in the function
#include<stdio.h>
int funa(float arr[],int n){
	int i;
	float s=0;
	
	for(i=0;i<n;i++){
		scanf("%f",&arr[i]);
		s=s+arr[i];
	}
	return s/n;
}

int main(){
	int m,i;
	float s=0,n[100],a;
	printf("\nEnter Number Of Element: ");
	scanf("%d",&m);
	printf("\nEnter Numbers:\n");
	a=funa(n,m);
	printf("\nAvarage is: %.2f",a);
	return 0;
}

//passing array as function arguments by passing array's base address to the function
/*
if arr[3]={1,2,3}
and int *ptr=arr;
then
*ptr=1
*(ptr+1)=2 //value at (base address + size of 1 int) or value at next address
*(ptr+2)=3
*/

#include<stdio.h>
int avg(float *ptr,int n){ //we have to use float ponter because here array is also float if we use int then it hrow error or garbage value or an invalid address where no value because
							// we cant perform int pointer arithmatic for floating array, so we have to give same datatype for both pointer and array
							//so float pointer for float array and int for int
	int i;
	float s=0;
	
	for(i=0;i<n;i++){
		scanf("%f",&(*(ptr+i)));
		s=s+(*(ptr+i));
	}
	return s/n;
}

int main(){
	int m,i;
	float s=0,arr[100],a;
	printf("\nEnter Number Of Element: ");
	scanf("%d",&m);
	printf("\nEnter Numbers:\n");
	a=avg(arr,m);//arr is by itself an array, only arr store base address
	printf("\nAvarage is: %.2f",a);
	return 0;
}
/*
output:
Enter Number Of Element: 5

Enter Numbers:
1
2
3
4
5

Avarage is: 3.00
*/