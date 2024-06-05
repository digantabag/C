/*
Passing Array As Function
*/
//passing 2D array as function arguments by declaring array as a parameter in the function
//it is one kind of call by value with array but here array value can be changed also because arr by itself a address and pointer also

#include<stdio.h>
int funa(int a[2][2]){ //for 1d array we can leave it blank like a[] but for 2d array we have to mention values like a[2][2]
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("\nElement No. arr[%d][%d]: %d",i,j, a[i][j]);		
}
	}
	return 0;
}

int main(){
	int arr[2][2]={{1,2},{3,4}}; //for arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}
	funa(arr);
	return 0;
}

/*
output:
Element No. arr[0][0]: 1
Element No. arr[0][1]: 2
Element No. arr[1][0]: 3
Element No. arr[1][1]: 4
*/
//passing 2D array as function arguments by passing array's base address to the function
#include<stdio.h>
void funa(int *p[3][3],int a[3][3]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			p[i][j]=&a[i][j];
		}
	}


}
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int *ptr[3][3];

	
	funa(ptr,arr);	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\narr[%d][%d]=%d",i,j, *ptr[i][j]);
		}
	}
			return 0;
}
//or

#include<stdio.h>
void funa(int *p[3][3],int a[3][3]){ //int** for 2d array also
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			p[i][j]=&a[i][j];
		}
	}
		
			for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\narr[%d][%d]=%d",i,j, *p[i][j]);
		}
	}
	}
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	int *ptr[3][3];

	
	funa(ptr,arr);	

			return 0;
}

	
/*
both output
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
