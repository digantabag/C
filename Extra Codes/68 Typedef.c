/*
Typedef in c
typedef is a way to represent datatypes or function in small way
or give datatypes a different name
syntax
typedef <precious_name> <alias or new name>;
typedef long long int lli;

it's like nickname 
like i'm diganta many person also call me digu
*/

#include<stdio.h>
typedef int i;

i main(){
	//typedef int i; here we can also mention type def but before main will be int noi
	i a,b;
	int i;
	a=1;
	b=2;
	i=5;
	printf("\na+b=%d,i=%d",a+b,i);
	return 0;
}

/*
output:
a+b=3,i=5
*/
