// every function example
//with argument and with return value
#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int main()
{
	int a,b,c;
	a=22;
	b=7;
	c=sum(a,b);
	printf("\nSum: %d",c);
	return 0;
}

//with argument and without return value
#include<stdio.h>

void star(int n){
	for(int i=0;i<n;i++){
		printf("%c ",'*'); 
	}                     

}

int main()
{
    int n;
    n=7;
	star(n);
	return 0;
}

//without argument and with return value
#include<stdio.h>

int getval(){
int i;
printf("\nEnter Value: ");
scanf("%d",&i);
return i;
}

int main()
{
	int c;
	c=getval();	
	printf("\nNumber Is: %d",c);
	return 0;
}

////without argument and without return value
#include<stdio.h>

void sum(){
	int a,b;
	printf("\nEnter number a: ");
	scanf("%d",&a);
	printf("\nEnter number b: ");
	scanf("%d",&b);
	printf("\nThe sum is: %d",a+b); 
}

int main()
{
	sum();
	return 0;
}
