//bitwise operator only work for 0 and 1 other wise it generates random valu
// its work bits by bits in bynary operation

#include<stdio.h>
int main(){
	int a,b;
	printf("\nEnter number a only 0 or 1: ");
	scanf("%d",&a);
	printf("\nEnter number b only 0 or 1: ");
	scanf("%d",&b);
	
	printf("\na&b: %d",a&b);//a and b;if both value is true mean a,b!=0 or a,b=1 then it returns 1 
	                        //if one of the value between a&b is 0 then it returns 0 becasue it is false 
	
	printf("\na|b: %d",a|b);//a or b; if one of the value between a&b is 1 then it returns 1 because it is true
							// if both a and b value is 0, a,b==0 then it return 0 because it is false   
	
	printf("\na^b: %d",a^b);//a^b mean, it's need (1 true conditon and 1 false condition) then it is true
	//a^b is xor condition  //a=0,b=0; both false so it returns 0, because it's false 
							//a=1,b=1; both true so it returns 0, because it's false 
							//a=1,b=0; here a is true amd b is false it returns 1, because it's true same for a=0,b=1
	return 0;
	

}
// other bit wise operator
//~ is binary 1's complement operator
//>> is binary right shift operator
//<< is binary left shift operator

//for mumber more than 0 & 1
/*
output:
Enter number a only 0 or 1: 3

Enter number b only 0 or 1: 5

a&b: 1
a|b: 7
a^b: 6

explanation:
3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6
*/