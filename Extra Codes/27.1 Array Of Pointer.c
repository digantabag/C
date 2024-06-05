/*
arrays of pointer and there arithmatic
int arr[10]; arr[0] mean 1st element of array
arr by itself, can be assigned to an integar pointer, not whole arr[]

array use congious memory, so for an int array of size 5;
there are 5 memory location and every memory location took size of an int
so if address of a[0] is 100 then next array element address of a[1] is 104

think an array arr[5] array of 5 element

arr [0] [1] [2] [3] [4]
val  0	 1	 2	 3	 4
add	100	104	108	112	116

think address of arr[0] is 100
because it's an integer array so it takes 4 bytes per memory location,and whole array have 5 memory location 
then address of arr[1] is arr[0]+size of 1 int=100+4=104

so value at address 100 is 0
and value at address 104 is 1
and value at address 108 is 2

if int took 2bytes then it should be
100>102>104>106>108

int *p=&arr;  //array of pointer //pa points first element of array
we can also write it as *p=arr(); because arr is also a pointer by itself
p mean address of arr which is firest element of array, arr[0]
p+1 mean address of arr[0]+size os 1 int=address of arr[1] 
*/

#include<stdio.h>
int main(){
	int arr[5]={0,1,2,3,4};
	int *pa=&arr;
	int *qa=arr;
	printf("\nAddress Of arr is using *pa=&arr: %d",pa);
	printf("\nAddress Of arr is using *qa=arr: %d",qa);
	
	//arr++; //so arr is an constant pointer; //if we write it here it give error because here array is pre defined and constant
	//but we can write pa++ because p++ is a address and it's not predefined or constant ; it's will increase every address from by 1 int
	//then arr[0] start from 104 instead of 100 and arr[4] ends at 106
	printf("\nAddress Of arr[0] is using arr: %d",arr);
	printf("\nAddress Of arr[1] is using arr: %d",arr+1);
	printf("\nAddress Of arr[0] is using arr Using *(&arr): %d", *(&arr)); //*(&arr) mean value at (address arr) and arr contain address of arr[0]
																			// so it prints address of arr[0]
	
	printf("\nAddress Of arr[0] is using &arr: %d",&arr[0]);//we can also use just &arr for a[0] but not for a[1]
	printf("\nAddress Of arr[1] is using &arr: %d",&arr[1]);//&arr[1] mean address of a[1]
															//we can't write it like &(arr+1) it throw error
															//also we can't write it like &arr+1 it throw error
															//because &(arr+1) mean "address of ( address of arr not address of a[0] this time ) + 1*sizeof(int)"
															//it becomes address of pointer array or a pointer to pointer
															
	
	printf("\nAddress Of arr[1] is using &arr[1]: %d",&arr[1]);
	printf("\nAddress Of arr[1] is using &arr+1: %d", &arr+1);
	
	printf("\nAddress Of arr[0] is using pa: %d",pa);
	printf("\nAddress Of arr[1] is using pa: %d",pa+1);
	
	printf("\nValue At arr[0] is using arr: %d", *arr);//or *(&arr) or *arr[0]
	printf("\nValue At arr[1] is using arr: %d", *(arr+1));//or *(&arr[1])
	
	printf("\nAddress Of arr[0] is using arr Using *(&arr): %d", *(&arr));//or (&arr[0])
	//printf("\nValue At arr[0] is using arr Using *arr[0]: %d", *(arr[0]));//it throw error because its invalid or not valid
																			//beacuse it means value at (value of arr[0])
	printf("\nValue At arr[0] is using arr Using *(&arr[0]): %d", *(&arr[0]));//mean value at(address of arr[0]) indirectly it print a[0]
	
	printf("\nValue At arr[1] is using arr: %d", *(arr+1));//or *(&arr[1])
	printf("\nValue At arr[1] is using normal: %d", arr[1]);
	
	printf("\nValue At arr[0] is using pa: %d", *pa);
	printf("\nValue At arr[1] is using pa: %d", *(pa+1));
	
		printf("\nValue At arr[0] is using pa[0]: %d", pa[0]);//that is pointer array mean we define a pointer like an array
	printf("\nValue At arr[1] is using pa[1]: %d", pa[1]);//so pa[1] mean value at arr[1], becasue pa=arr and pa contains same address as arr
	
	return 0;
}
/*

output:
Address Of arr is using *pa=&arr: 6684160
Address Of arr is using *qa=arr: 6684160 //so we get same value for *pa=&arr and *qa=arr so both we can declare  but best way is *qa=arr
Address Of arr[0] is using arr: 6684160
Address Of arr[1] is using arr: 6684164
Address Of arr[0] is using arr Using *(&arr): 6684160
Address Of arr[0] is using &arr: 6684160
Address Of arr[1] is using &arr: 6684164
Address Of arr[1] is using &arr[1]: 6684164
Address Of arr[1] is using &arr+1: 6684180//it throw diffrent address because it's "address of ( address of arr ) + 1*sizeof(int)"
Address Of arr[0] is using pa: 6684160
Address Of arr[1] is using pa: 6684164
Value At arr[0] is using arr: 0
Value At arr[1] is using arr: 1
Address Of arr[0] is using arr Using *(&arr): 6684160
Value At arr[0] is using arr Using *(&arr[0]): 0
Value At arr[1] is using normal: 1
Value At arr[1] is using arr: 1
Value At arr[0] is using pa: 0
Value At arr[1] is using pa: 1
Value At arr[0] is using pa[0]: 0
Value At arr[1] is using pa[1]: 1
*/

//using for loop
/*
#include<stdio.h>
int main(){
	int i, arr[5]={0,1,2,3,4};
	int *pa=arr; //we didn't write &arr because arr is a pointer by itself also 
					//but we can also write *ptr=&arr, it will throw an error but run perfectly and give same output as previous 
	for(i=0;i<5;i++){
	printf("\nAddress Of arr[%d] is: %d",i,pa+i);
	printf("\nValue At arr[%d] is: %d",i, *(pa+i));//if we give *pa+i it's mean value at address (pa) + i so
												   //we give *(pa+1) because it means vallue at address (pa+1) 
	printf("\n");
	} 
	return 0;
}
*/
/*
output
Address Of arr[0] is: 6684144 //pa
Value At arr[0] is: 0//*(pa+1)

Address Of arr[1] is: 6684148 //pa+1
Value At arr[1] is: 1

Address Of arr[2] is: 6684152 //pa+2
Value At arr[2] is: 2

Address Of arr[3] is: 6684156
Value At arr[3] is: 3

Address Of arr[4] is: 6684160
Value At arr[4] is: 4
*/


//only arr is also pointer if int *pa=&arr not mentioned
/*
#include<stdio.h>
int main(){
	int i, arr[5]={0,1,2,3,4}; // if we write arr[] instead of arr[5] no problem it's automatically calculate array size
	for(i=0;i<5;i++){
	printf("\nAddress Of arr[%d] is: %d",i,arr+i);//arr is also pointer
	printf("\nValue At arr[%d] is: %d",i, *(arr+i));//if we give *pa+i it's mean value at address (pa) + i so
									//arr[i]=*(arr+i)			   //we give *(pa+1) because it means vallue at address (pa+1) 
	printf("\n");
	} 
	return 0;
}
*/
//so in those way pointer helps us to reach any memory location of array
/*
so for an int array if starting memory address is 1000
then and if we want find memory address of nth element in array then formula is 1000+n*sizeof(int)
size of int depends on arch
*/