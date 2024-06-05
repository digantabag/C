/*
Find Minimum And Maximum Number In Array
*/
#include<stdio.h>
int main(){
	int i,n,arr[100];

	printf("\nEnter Total Numbers You Want To Enter: ");
	scanf("%d",&n);
	printf("\nEnter Numbers...\n");
	for(i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nAll Numbers:");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	
	int min=arr[0], max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("\nMax: %d\tMin: %d",max,min);
	
	return 0;
}
/*
output:
Enter Total Numbers You Want To Enter: 5

Enter Numbers...
arr[0]: 5
arr[1]: 1
arr[2]: 3
arr[3]: 9
arr[4]: 2

All Numbers: 5 1 3 9 2
Max: 9  Min: 1
*/

/*
explanation:
here 
arr[0]: 5
arr[1]: 1
arr[2]: 3
arr[3]: 9
arr[4]: 2

so on final loop
first min=max=arr[0]=5
now i=0
skip because arr[0]=5,&5=5
now i=1, so arr[1]=1

is not greater than max or 5 so skip
is less than min or 5
so set as min value min=arr[1]
so now min=1
i=2,arr[2]=3
3 not greater than max 5 or not less than min 1 so skip
i=3,arr[3]=9
9 is greater than max 5 so 9 set as max
9 not less than min 1 so skip
i=4,arr[4]=2
2 not greater than max 9 or not less than min 1 so skip

so max is 9 and min is 1
*/