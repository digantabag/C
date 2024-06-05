/*
Array Size Given By User
*/
#include<stdio.h>
int main(){
	int n;
	printf("\nEnter Array Size: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter Array Element...\n");
	for(int i=0;i<n;i++){
		printf("arr %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nDisplaying Array Element...\n");
	for(int i=0;i<n;i++){
		printf("arr %d: %d",i,arr[i]);
	}
	return 0;
}
/*
output:
Enter Array Size: 5

Enter Array Element...
arr 0: 1
arr 1: 2
arr 2: 3
arr 3: 4
arr 4: 5

Displaying Array Element...
arr 0: 1
arr 1: 2
arr 2: 3
arr 3: 4
arr 4: 5
*/
