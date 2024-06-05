#include<stdio.h>
int main(){
	float a,b;
	printf("\nEnter number a: ");
	scanf("%f",&a);
	printf("\nEnter number b: ");
	scanf("%f",&b);
	printf("\na+b: %.f",a+b);//.1 before f mean if result is 12 then it gives 12.0, if .0 or . then only 12
							 //0.1 = .1, if in that reuslt print 1.0
							 //for 2.1 output be like hi_ _ 1 . 0, or 2 is it will left 2 spaces before output
							 //for -2.1 output be like 1.0 _ _hi, or -2 will left 2 spaces after output
							 //%d,%f,%c this are format specifire to define int,float&char
							 //%l for long, %lf for double, %LF for long double 
							  
	printf("\na-b: %.f",a-b);
	printf("\na*b: %.f",a*b);
	printf("\na/b: %.2f",a/b);
	return 0;
}
//% is arithmation operator to find reminder
/*in math if a expression
like 1+2*3
we use bodmas rule here but thats not applicable for c program
we need to remember that
1. multiplicative *,/,%
2. addtive +,-
think a equation
1+2*3/3-1
in math we normally use bodmas rule 
where first we did divide,multiply,addition ,subtract
but in c program we need to do first
multiply then division then addition then minus
*/
//the best way you can use bracket to make this kind equation that is easy to understand