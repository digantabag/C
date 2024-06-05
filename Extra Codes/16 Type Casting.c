//typecasing is a syntax to change one datatype to another, change a float value in a int
//typeconvertion is a problem where compiler automatically change datatype one to another like flaot to int to avoid that we use typecasting
//syntax: (type) value; type be like int,float
#include<stdio.h>
int main(){
	int a=5;
	printf("\nValue Of a is %d",a);
	
	float b=22/7; 
	printf("\nValue Of b is %.3f", b);
	
	float e=22.0/7;
	printf("\nValue Of e is %.3f", e);
	
	float f=(float) 22/7; 
	printf("\nValue Of f is %.3f", f);
	
	float c=(int) 54.5/5;
	printf("\nValue Of c is %.3f",c);
	
	float j=(int) 54.5/5.5;
	printf("\nValue Of j is %.3f",j);

	float p=(int) 54.5/(int) 5.5;
	printf("\nValue Of p is %.3f",p);
		
	float d=22.0/7;
	printf("\nValue Of d is %d",(int) d);
	
	float g=22.0/7;
	printf("\nValue Of g is %f",(int) g);
	
	float h=22.0/7;
	printf("\nValue Of h is %d", h);
	

	
	return 0;
}
/*
Value Of a is 5
Value Of b is 3.000
Value Of e is 3.143
Value Of f is 3.143
Value Of c is 10.000
Value Of j is 9.818
Value Of p is 10.000
Value Of d is 3
Value Of g is 0.000000
Value Of h is 1073741824

here value of a normally printed because a is already integer

now b is an float variable but still it give output like an integer which is 3.000 [it's need to give 3.143]
that's happen because in 22/7 both 22 & 7 seperately an integer value
in that case typeconversion occurs in our compiler, and our compiler automatically convert our float out put into an int output

if we see for e, we give e=22.0/7, here 22.0 is float and 7 is integer in that case type conversion not occurs in compiler and output will be float
and give output 3.143
and 
if we see type casting method and type f=(float) 22/7; for this type casting 22 is float and 7 an int variable and output will be a float 

for c=(int) 54.5/5; for that type casting 54.5 becomes float to int and 5 remain int and output also be a int variable

for j=(int) 54.5/5.5 for that type casting 54.5 become float to int but 5.5 is an float and output will be a float variable

for p=(int) 54.5/(int) 5.5; both 54.5 & 5.5 becomes float to int that's why output will be an int variable

for d we use another type of typecasting
here we can show a float variable using %d in that case we have to put (int) before d in printf line otherwise if output of d is a garbage value
here 
for 
float d=22.0/7;
22.0/7=3.143 ouput comes then in next line
we use  
printf("%d",(int) d); %d instead of %f, and (int) before d then output is int , which is 3
if we write printf("%f",(int) d) it will return 0 --- shown in g
if we write printf("%d", d) it will return garbage value --- shown in h
*/