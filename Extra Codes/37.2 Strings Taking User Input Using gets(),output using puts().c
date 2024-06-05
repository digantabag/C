/*
Strings
Taking User Input Using gets();
and print with puts();
*/
//for null char given and not given

#include<stdio.h>
int main(){

	char n[10];
	printf("\nEnter String: ");
	gets(n); //we can use scanf("%s",n); but cant able to take blank spaces we cant write hello into hel lo
	printf("\nString Is... ");
	printf("\nUsing Printf: ");
	printf("%s",n); //%s for string because we didn't use char array here if we use %c it's return garbage value
	printf("\nUsing Puts(): ");
	puts(n);	
	
	return 0;
}
/*
output:
Enter String: digu is black

String Is...
Using Printf: digu is black
Using Puts(): digu is black
*/