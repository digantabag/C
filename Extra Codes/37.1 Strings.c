/*
Strings
strings is not a datatype
we need charcater array to represent string
like name,city
' \0 ' is called null character used to terminate a string, otherwise for extra length it returns garbage value
think a char array with length 8

d i g u
0 1 2 3 4 5 6 7 
it returns digu and garbage value for place 4 5 6 7 if garbage value is x then output witll be diguxxxx

d i g u \0
0 1 2 3  4 5 6 7
because here is \0 so string is terminated in place of 4, and garvage value is not printed for place 5 6 7
\0 to tell compiler string ends here

to make a string
we need char array [length of string + 1(for \0)]

think a string to store is 'digu'
so we cant take char array length 4

d i g u
0 1 2 3 
that show error and return garbage value at end digux

we need to take char array length 5

d i g u \0
0 1 2 3  4
\0  is mandatory to eliminate a string for charracter

to store digu we need 5 length character array

so string is a character array, terminated by null character

char name[]="digu"; 
if we use double coat ("") and type string name then compiler automatically add \0 in the end of string digu\0
double coat for request compiler to took \0 at end automatically

char name[]={'d','i','g','u','\0'}; normal way we have to use \0 at end it is valid
single coat('') for took char individually, and also for take char
char name[]={'d','i','g','u'}; it's invalid and give garbage value at end like digux

*/
//for null char given and not given
/*
#include<stdio.h>
int main(){
	char n[]={'d','i','g','u','\0'};
	int i;
	printf("\nnull char given: ");
	for(i=0;i<5;i++){
		printf("%c",n[i]);
	}
	printf("\nnull char not given: ");
	char f[]={'d','i','g','u'};
		for(i=0;i<5;i++){
		printf("%c",f[i]);
	}
	
	return 0;
}
*/
/*
output:
null char given: digu
null char not given: digud //here last d is an garbage value
*/
//using loop
#include<stdio.h>
void printstr(char str[]){
	int i=0;
	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
}

int main(){
	char n[5] ="digu"; //it's valid string
	//char n[4] ="digu"; //iy's give ouput but it's an onvalid declaration
	printstr(n);
	return 0;
}
//output: digu