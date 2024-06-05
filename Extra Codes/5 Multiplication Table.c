/*
#include<stdio.h>
int main(){
	int a;
	printf("\nEnter the number you want multiplication table of: ");
	scanf("%d",&a);
	printf("\nMultiplication table of %d...\n",a);
	printf("\n%d x 1 = %d",a,a*1); 
	printf("\n%d x 3 = %d",a,a*3); 
	printf("\n%d x 4 = %d",a,a*4);
	printf("\n%d x 5 = %d",a,a*5);
	printf("\n%d x 6 = %d",a,a*6);
	printf("\n%d x 7 = %d",a,a*7);
	printf("\n%d x 8 = %d",a,a*8);
	printf("\n%d x 9 = %d",a,a*9);
	printf("\n%d x 10 = %d\a",a,a*10);
	return 0;
}
*/

//using loop
#include<stdio.h>
int main(){
	int i,a;
	printf("\nEnter the number you want multiplication table of: ");
	scanf("%d",&a);
	printf("\nMultiplication table of %d...\n",a);
	for(i=1;i<=10;i++){
	 					printf("\n%d x %d = %d",a,i,a*i); 
					  }
	return 0;
}