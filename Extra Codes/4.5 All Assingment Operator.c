#include<stdio.h>

//Example:1
int main(){
	float a,b,c,d;
	printf("\nEnter number a: ");
	scanf("%f",&a);
	printf("\nEnter number b: ");
	scanf("%f",&b);
	printf("\nEnter number c: ");
	scanf("%f",&c);
	printf("\nEnter number d: ");
	scanf("%f",&d);
	printf("\na+=1: %.f",a+=1);//a+=1 mean a+1=? //for a=a+1 we also write it as a++
	printf("\nb-=1: %.f",b-=1);//a-=1 mean a-1=?
	printf("\nc*=2 %.f",c*=2);//a*=2 mean a*2=?
	printf("\nd/=2: %.2f",d/=2);//a/=2 mean a/2=?
	
	return 0;
}

/*Example 2
int main(){
	float a;
	a=1;
	printf("a=%.f",a);
	printf("\na+=1: %.f",a+=1);//a+=1 mean a+1=?
	//a=1 > a+1=2 > a=2
	printf("\na-=1: %.f",a-=1);//a-=1 mean a-1=?
	//a=2 > a-1=1 > a=1
	printf("\na*=2 %.f",a*=2);//a*=2 mean a*2=?
	//a=1 > a*1=2 > a=2
	printf("\na/=2: %.2f",a/=2);//a/=2 mean a/2=?
	//a=2 > a/2=1 > a=1
	return 0;
}
*/


//miscellneous operators
//sizeof() find size of a variable here sizeof a
//& return the address of a,&a used in scanf to take value
//* pointer to a variable *a
//?: conditional expression, if condition is true ? then value x: otherwise value y