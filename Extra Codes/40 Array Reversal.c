/*
Array Reversal
*/

#include<stdio.h>
void arrrev(int *arr,int l){
	int i;
	for(i=l-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}

void printarr(int *arr, int l){
	int i;
	for(i=0;i<l;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int a[100];//if we didn't give value of n here then we have to give #define n 1000 under stdio.h
	int n,i;
	
	printf("\nEnter Array Length: ");
	scanf("%d",&n);
	
	printf("\nEnter Array Elemets...\n");
	for(i=0;i<n;i++){
		printf("AE[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nPrinting Array: ");
	printarr(a,n);
	
	printf("\nPrinting Reverse Array: ");
	arrrev(a,n);
	
	return 0;
}
/*
output:
Enter Array Length: 5

Enter Array Elemets...
AE[1]: 1
AE[2]: 2
AE[3]: 3
AE[4]: 4
AE[5]: 5

Printing Array: 1 2 3 4 5
Printing Reverse Array: 5 4 3 2 1
--------------------------------
*/
