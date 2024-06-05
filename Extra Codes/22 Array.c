//array is  a collection of data items of same type
/*
array can also store the collection of derived data types, such as pointers, structures, etc. discuss about it later

array are stored at contiguous memory  location
mean think there are three memory location
1 2 3
memory can store first in 1 then 2 then not 1>3>2

array types
1 Dimensional Array List, Vectors, example {1,2,3}
2 D Array Table, Matrices have  row column {1,2,3}{1,2,3}
3 D Array Cube have row column height{1,2,3}{1,2,3}{1,2,3}

we use array because
using array made code more organized and readable
like store marks of 10 students

array is used to represent multiple data items of same type by using only single name
2d array makes easay to represent matrix

each element of an array is of same size because array content same category data, like int array took only int 2byte, char array took only char 2 byte
finding element in array with given index xan be accessed very quickly by using it's address which can be
calcilated using the base address and the index

syntax
datatype name[size]; example int num[10];
1D array
dt name[size]={x,y,z........} value can be get by given or user input also
2D array
dt name[row][coulumn]; or dt name[][]={1,2,3}{3,4}

we also accesessing it one by one using it's index;
like
name[0]=0;
*/

//1D Array

//value given

#include<stdio.h>
int main(){
	int marks[4];
	marks[0]=34;
	printf("\nMarks Of Student 1 is: %d",marks[1]);
	return 0;
}

//or
/*
#include<stdio.h>
int main(){
	int marks[5]={49,35,44,29,28}; // in that case array start from 0>1>2>3>4
 				//if we didnt give size then automatically count number of element in array only in that case
 				// so we can also write it as int marks[]={49,35,44,29,28}; for only when we have have to give value on side 
	for(int i=0; i<5; i++){ //array always start from 0 that's why if we give i=1 then it's cant print last one
	printf("\nMarks Of Student %d is: %d",i+1,marks[i]); //we use i+1 because firstly it's print student 0 which is invalid in real world so we want to make 1 thats why we give i+1 = 0+1=1 
	}	
	return 0;
}
*/

/*
otput for(int i=0; i<5; i++)

Marks Of Student 1 is: 49
Marks Of Student 2 is: 35
Marks Of Student 3 is: 44
Marks Of Student 4 is: 29
Marks Of Student 5 is: 28

output for(int i=1; i<=5; i++)

Marks Of Student 1 is: 35
Marks Of Student 2 is: 44
Marks Of Student 3 is: 29
Marks Of Student 4 is: 28
Marks Of Student 5 is: 0

*/

#include<stdio.h>
int main(){
	int marks[5];
 	marks[1]=49;// here value given step by step if we give like privious array start from 0 to 4
	marks[2]=35;
	marks[3]=44;
	marks[4]=29;
	marks[5]=28;
	for(int i=1; i<=5; i++){//because we mention array start from 1-5 that's why here we write i=1, otherwise if we dont't mention previous then by default n size array run 0-(n-1)
	printf("\nMarks Of Student %d is: %d",i,marks[i]); 
	}	
	return 0;
}

/*
output
Marks Of Student 1 is: 49
Marks Of Student 2 is: 35
Marks Of Student 3 is: 44
Marks Of Student 4 is: 29
Marks Of Student 5 is: 28
*/

//value taken by user

#include<stdio.h>
int main(){
	int i,n,marks[11]; //max 11-1=10 student take as input
	printf("\nEnter Number Of Students: ");//max value is 4 otherwise throw value, if want make n number of value max number then we had to add marks[n+1]
	scanf("%d",&n);//max value can take is 10 because 11-1=10
	for(i=0;i<n;i++){
		printf("Enter The Marks Of Student %d: ",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\nShowing Result...\n");
	
	for(i=0;i<n;i++){
		printf("\nThe Marks Of Student %d Is: %d",i+1,marks[i]);
	}
return 0;
}

/*
output:
Enter Number Of Students: 5
Enter The Marks Of Student 1: 49
Enter The Marks Of Student 2: 35
Enter The Marks Of Student 3: 44
Enter The Marks Of Student 4: 29
Enter The Marks Of Student 5: 28

Showing Result...

The Marks Of Student 1 Is: 49
The Marks Of Student 2 Is: 35
The Marks Of Student 3 Is: 44
The Marks Of Student 4 Is: 29
The Marks Of Student 5 Is: 28
*/

//2D Array
//value given
/*
#include<stdio.h>
int main(){
	int mat[2][3]={{1,2,3},{4,5,6}};
	for(int i=0;i<2;i++){ //when value of i=0
		for(int j=0; j<3; j++){ // j will circulate 0 to 2 times so for  i=0, j=0,1,2 same value of j in every value of i
			printf("\nMatrix [%d] [%d] : %d",i+1,j+1,mat[i][j]);
		}
	}
return 0;
}
*/
/*
2d array mean matrix
mat[2][3]={{1,2,3},{4,5,6}}
mean matrix of 2 row 3 column
above value can be represent as

	j1	j2	j3
i1	1 	2 	3
i2	4 	5 	6

output
Matrix [1] [1] : 1 //in above value of 1st row 1st column which is 1, value when i,j=1
Matrix [1] [2] : 2
Matrix [1] [3] : 3
Matrix [2] [1] : 4
Matrix [2] [2] : 5
Matrix [2] [3] : 6

mat[3][3]={{1,2,3},{4,5,6},{7,8,9}} it's mean 3x3 matrix
1 2 3
4 5 6
7 8 9

first loop for row and 2nd loop for column
can be reverse calculate by make change in for loop
*/ 

//print matrix by user input
#include<stdio.h>
int main(){
	int i, j, r, c, mat[11][11]; //mat[][]={0}; mean every element of array is 0
	printf("\nEnter The Number Of Rows: ");
	scanf("%d",&r);
	printf("Enter The Number Of Column: ");
	scanf("%d",&c);
	printf("\nEnter The Values...\n");
	for(int i=0;i<r;i++){
		for(int j=0; j<c; j++){
			printf("Row No. %d, Column No. %d : ",i+1,j+1,mat[i][j]);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nMatrix...\n\n");
	
	for(int i=0;i<r;i++){
		for(int j=0; j<c; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
return 0;
}

/*
Output:
Enter The Number Of Rows: 3
Enter The Number Of Column: 3

Enter The Values...
Row No. 1, Column No. 1 : 1
Row No. 1, Column No. 2 : 2
Row No. 1, Column No. 3 : 3
Row No. 2, Column No. 1 : 4
Row No. 2, Column No. 2 : 5
Row No. 2, Column No. 3 : 6
Row No. 3, Column No. 1 : 7
Row No. 3, Column No. 2 : 8
Row No. 3, Column No. 3 : 9

Matrix...

1 2 3
4 5 6
7 8 9
*/
//array element ar accessed using the subscript variable arr[0] arr[1] 