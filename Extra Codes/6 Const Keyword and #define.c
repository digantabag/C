//use of const keyword and #define
//#include<stdio.h>
/*
int main(){
	int a=1;
	printf("a=%d",a);
	return 0;
}
*/
//here output is a=1

/*
int main(){
	int b=2;//here value of b=2
	b=3;//here value of b we change to b=3
	printf("b=%d",b);
	return 0;
}
*/
//so output will be b=3

/*
int main(){
	const int c=3;//here value of c=3, we use const to make c's value constant or cant be changable
	c=4;//for this line program shows error because this line wants to change value of c 3>4, 
	    //but c is here a constant, and we cannot change a value of constant that's why for this line this program show error
	    // because for const keyword c is a constant variable
		 
	printf("c=%d",c);
	return 0;
}
*/
//if we give line c=4 this program show error
//if we didn't give the line c=4 then the output will be c=3

//#define
/*
#include<stdio.h>
#define pi 3.142
int main(){
	pi=3.33;//for this line program throw error because value of pi previously declared before
	printf("pi=%.3f",pi);//pi value printed because it's declared in start
	return 0;
}
*/
//if we give line pi=3.33 this program throw error and if we remove the line then output will be pi=3.142