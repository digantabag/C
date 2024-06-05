//passing 2D array as function arguments by passing array's base address to the function

#include<stdio.h>
void funa(int *p[3][3],int a[3][3]){
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			p[i][j]=&a[i][j];
		}
	}
	printf("\nEnter Elemrnts...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("arr[%d][%d]: ",i,j);
		scanf("%d",p[i][j]);
		}
	}
	
	printf("\nPrinting Elemrnts...\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\narr[%d][%d]=%d",i,j, *p[i][j]);
		}
	}
	printf("\n");
		printf("\nMatrix is...\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",*p[i][j]);
		}
	printf("\n");
	}
}

int main(){
	int arr[3][3];
	int *ptr[3][3];
	funa(ptr,arr);	
	return 0;
}

/*
output:
Enter Elemrnts...
arr[0][0]: 1
arr[0][1]: 2
arr[0][2]: 3
arr[1][0]: 4
arr[1][1]: 5
arr[1][2]: 6
arr[2][0]: 7
arr[2][1]: 8
arr[2][2]: 9

Printing Elemrnts...

arr[0][0]=1
arr[0][1]=2
arr[0][2]=3
arr[1][0]=4
arr[1][1]=5
arr[1][2]=6
arr[2][0]=7
arr[2][1]=8
arr[2][2]=9

Matrix is...
1 2 3
4 5 6
7 8 9
*/
//here row and columns also taken by user

#include<stdio.h>
void funa(int *p[10][10],int a[10][10],int y, int z){
	int i,j;
	
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
			p[i][j]=&a[i][j];
		}
	}
	printf("\nEnter Elemrnts...\n");
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
		printf("arr[%d][%d]: ",i,j);
		scanf("%d",p[i][j]);//p is address of array so p[i][j] mean address at array i row j column
		}
	}
	
	printf("\nPrinting Elemrnts...\n");	
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
			printf("\narr[%d][%d]=%d",i,j, *p[i][j]);
		}
	}
	printf("\n");
		printf("\nMatrix is...\n");
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
			printf("%d ",*p[i][j]);
		}
	printf("\n");
	}
}

int main(){
	int arr[10][10];
	int *ptr[10][10];
	int r,c;
 	printf("\nMax No. Of Rows & Column Is 10 ([0][0]to[9][9])");
	printf("\nEnter No. Of Rows: ");
	scanf("%d",&r);
	printf("\nEnter No. Of Columns: ");
	scanf("%d",&c);
	funa(ptr,arr,r,c);	
	return 0;
}

/*
output:
Max No. Of Rows & Column Is 10 ([0][0]to[9][9])

Enter No. Of Rows: 3

Enter No. Of Columns: 2

Enter Elemrnts...
arr[0][0]: 1
arr[0][1]: 2
arr[1][0]: 3
arr[1][1]: 4
arr[2][0]: 5
arr[2][1]: 6

Printing Elemrnts...

arr[0][0]=1
arr[0][1]=2
arr[1][0]=3
arr[1][1]=4
arr[2][0]=5
arr[2][1]=6

Matrix is...
1 2
3 4
5 6
*/
//or
#include<stdio.h>
void funa(int *p[10][10],int a[10][10],int y, int z){
	int i,j;
	
	printf("\nEnter Elemrnts...\n");
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
		printf("arr[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]); //&a[i][j] because address of i row j column
		}
	}
	
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
			p[i][j]=&a[i][j];
		}
	}


	printf("\nPrinting Elemrnts...\n");	
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
			printf("\narr[%d][%d]=%d",i,j, *p[i][j]);
		}
	}
	printf("\n");
		printf("\nMatrix is...\n");
	for(i=0;i<y;i++){
		for(j=0;j<z;j++){
			printf("%d ",*p[i][j]);
		}
	printf("\n");
	}
}

int main(){
	int arr[10][10];
	int *ptr[10][10];
	int r,c;
 	printf("\nMax No. Of Rows & Column Is 10 ([0][0]to[9][9])");
	printf("\nEnter No. Of Rows: ");
	scanf("%d",&r);
	printf("\nEnter No. Of Columns: ");
	scanf("%d",&c);
	funa(ptr,arr,r,c);	
	return 0;
}
/*
output;
Max No. Of Rows & Column Is 10 ([0][0]to[9][9])
Enter No. Of Rows: 3

Enter No. Of Columns: 2

Enter Elemrnts...
arr[0][0]: 1
arr[0][1]: 2
arr[1][0]: 3
arr[1][1]: 4
arr[2][0]: 5
arr[2][1]: 6

Printing Elemrnts...

arr[0][0]=1
arr[0][1]=2
arr[1][0]=3
arr[1][1]=4
arr[2][0]=5
arr[2][1]=6

Matrix is...
1 2
3 4
5 6
*/