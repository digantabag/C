/*
stdlib system coomand
system comman used for cmd run cmd command
system("cls"); for clear screen because conio.h and clrscr not supported in devc++
we can also use like create folder on program destination folder like system("mkdir digant");
it is same like write a command in cmd
*/
#include<stdio.h>
#include<stdlib.h>//for system
void main(){
	printf("hello world");
	printf("\ndo you want to print again: ");
	int n;
	scanf("%d",&n);
	if(n==1){
		system("cls");
			printf("hello world");
	}

}
/*

*/
