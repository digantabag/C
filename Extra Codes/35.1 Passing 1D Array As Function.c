/*
Passing Array As Function
*/
//passing array as function arguments by declaring array as a parameter in the function
//it is one kind of call by value with array but here array value can be changed also because arr by itself a address and pointer also

#include<stdio.h>
int funa(int a[]){
	int i;
	for(i=0;i<5;i++){
		printf("\nElement No. %d: %d",i, a[i]);		
	}
	return 0;//if we didn't want to return a value from function then we have to use void
}

int main(){
	int arr[5]={6,7,8,9,10}; 
	funa(arr);
	return 0;
}

/*
output:
Element No. 0: 6
Element No. 1: 7
Element No. 2: 8
Element No. 3: 9
Element No. 4: 10
*/

//heres an example of changing value of array under a function

#include<stdio.h>
int funa(int a[]){
	int i;
	for(i=0;i<5;i++){
		printf("\nElement No. %d: %d",i, a[i]);		
	}
	a[0]=69;
	a[1]=96;
	return 0;
}

int main(){
	int arr[5]={6,7,8,9,10};
	printf("\nValue Of arr[0]: %d", arr[0]);
	printf("\nValue Of arr[1]: %d", arr[1]);
	funa(arr);
		printf("\nValue Of arr[0]: %d", arr[0]);
		printf("\nValue Of arr[1]: %d", arr[1]);
	return 0;
}

/*
output:
Value Of arr[0]: 6
Value Of arr[1]: 7
Element No. 0: 6
Element No. 1: 7
Element No. 2: 8
Element No. 3: 9
Element No. 4: 10
Value Of arr[0]: 69
Value Of arr[1]: 96
*/

//passing array as function arguments by passing array's base address to the function
/*
if arr[3]={1,2,3}
and int *ptr=arr;
then
*ptr=1
*(ptr+1)=2 //value at (base address + size of 1 int) or value at next address
*(ptr+2)=3
*/

#include<stdio.h>
int funa(int *p){
	int i;
	for(i=0;i<5;i++){
		printf("\nElement No. %d: %d",i, *(p+i));//we can also write p[i] instead of *(p+i) so p[1] = value at a[1]
		//printf("\nElement No. %d: %d",i, p[i];//*(p+i) for i=1 mean value at 1, 0+1=1 and p[1] mean value at 1 because p=arr because p contain address of arr, and only arr also contain address so p[1]=arr[1] 		
	}//we can also make change output like previous by giving *p=69
	return 0;
}

int main(){
	int arr[5]={6,7,8,9,10}; 
	funa(arr);//arr is by itself an array, only arr store base address
	//we can also use funa(&arr); both are same 
	return 0;
}


/*
output:
Element No. 0: 6
Element No. 1: 7
Element No. 2: 8
Element No. 3: 9
Element No. 4: 10
*/

//value of array change using pointer under a function
#include<stdio.h>
int funa(int *p){
	int i;
	for(i=0;i<5;i++){
		printf("\nElement No. %d: %d",i, *(p+i));		
	}
	*p=69;
	*(p+1)=96;
	return 0;
}

int main(){
	int arr[5]={6,7,8,9,10}; 
	printf("\nValue Of arr[0]: %d", arr[0]);
	printf("\nValue Of arr[1]: %d", arr[1]);
	funa(arr);
		printf("\nValue Of arr[0]: %d", arr[0]);
		printf("\nValue Of arr[1]: %d", arr[1]);
	return 0;
}
/*
output:
Value Of arr[0]: 6
Value Of arr[1]: 7
Element No. 0: 6
Element No. 1: 7
Element No. 2: 8
Element No. 3: 9
Element No. 4: 10
Value Of arr[0]: 69
Value Of arr[1]: 96
*/
