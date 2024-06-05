/*
Sum Of Numbers Using Array And Normal
*/
#include<stdio.h>
int main(){
	int i,a[100],n,b,s=0,t=0;
	
	printf("\nEnter Total Numbers You Want To Enter: ");
	scanf("%d",&n);
	
	//using array
	printf("\nUsing Array & Loop...");
	printf("\nEnter Numbers...\n");
	for(i=0;i<n;i++){
		printf("No. %d: ",i+1);
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	
	printf("\nSum: %d\n",s);
	
	//using scanf and loops
	printf("\nUsing Scanf & Loop...");
	printf("\nEnter Numbers...\n");
	for(i=0;i<n;i++){
		printf("No. %d: ",i+1);
		scanf("%d",&b); //here inputs of b are taken & taken until loop ends so value of b changable 
		t=t+b;
	}
	
	printf("\nSum: %d",t);
	
	return 0;
}
/*
output:
Enter Total Numbers You Want To Enter: 5

Using Array & Loop...
Enter Numbers...
No. 1: 1
No. 2: 2
No. 3: 3
No. 4: 4
No. 5: 5

Sum: 15

Using Scanf & Loop...
Enter Numbers...
No. 1: 5
No. 2: 4
No. 3: 3
No. 4: 2
No. 5: 1

Sum: 15
*/
