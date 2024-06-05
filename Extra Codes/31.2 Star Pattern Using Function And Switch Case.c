/*
Star Pattern
*/
#include<stdio.h>
void tsp(int n){
	int i,j;
	printf("\nTriangular Star Pattern...\n");
	printf("\n");
	for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
}

void rtsp(int n){
	int i,j;
	printf("\nReverse Triangular Star Pattern...\n");
	printf("\n");
	for(i=n;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
}

int main(){
	int r,t;
	printf("\nEnter Number Of Rows: ");
	scanf("%d",&r);
	printf("\nType 0 For Triangular Star Pattern");
	printf("\nType 1 For Triangular Star Pattern");
	printf("\nType 2 For Print Both");
	printf("\nType: ");
	again:
	scanf("%d",&t);
	switch(t){
	
	case 0: tsp(r);
			break;
		
	case 1: rtsp(r);
			break;
		
	case 2: tsp(r);
			rtsp(r);
			break;
	
	default:	printf("\nInvalid Input! Enter Type Again: ");
				goto again;
				break;
	}
	
	return 0;
}

/*
output:
Enter Number Of Rows: 5

Type 0 For Triangular Star Pattern
Type 1 For Triangular Star Pattern
Type 2 For Print Both
Type: 3

Invalid Input! Enter Type Again: 2

Triangular Star Pattern...

*
**
***
****
*****

Reverse Triangular Star Pattern...

*****
****
***
**
*

*/

