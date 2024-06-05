/*
Took Character
*/
#include<stdio.h>
int main(){
	char ch;
	printf("\nEnter Character: ");
	scanf(" %c",&ch);//always give a space before %c while taking char
	//char only take one 1st input as charachter if you type abc it's take only a
	//for multiple character input we use string
	printf("\nCharacter Is: %c",ch);
	return 0;
}
/*
output1:
Enter Character: a
Character Is: a

output2:
Enter Character: abc
Character Is: a
*/
