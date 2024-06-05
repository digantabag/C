/*
think a 2d array matrix
	C1	C2	C3

R1	1	2	3

R2	4	5	6

R3	7	8	9

arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}

think in that case address of
			  Address
R1C1 = 1 		100
R1C2 = 2		104
R1C3 = 3		108
R2C1 = 4 		112
R2C2 = 5		116
R2C3 = 6		120
R3C1 = 7 		124
R3C2 = 8		128
R3C3 = 9		132

we can divide 2D Array in 3 1D Array

arr[3]={1,2,3};
arr[3]={4,5,6};
arr[3]={7,8,9};
*/

#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int *ptr[3][3];//for 2d array we have to declare an pointer which is an 2d array also
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			ptr[i][j]=&arr[i][j]; //here we assign the address array of ptr by matching rows and column 
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\narr[%d][%d]=%d",i,j, *ptr[i][j]); //here we print assigned value with pointer
		}
	}
	
		return 0;
}
/*
output:
arr[0][0]=1
arr[0][1]=2
arr[0][2]=3
arr[1][0]=4
arr[1][1]=5
arr[1][2]=6
arr[2][0]=7
arr[2][1]=8
arr[2][2]=9
*/