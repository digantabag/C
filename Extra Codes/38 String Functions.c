/*
String Functions #include<string.h>

strcat() > this function is used to concatenate or combine two given strings
strcat("Hello","World");
it's return hello world
Here Hello Turns To HelloWorld
and World Remains World

strlen() > use to show string length
strlen("Hello");
it's calculate length of string excluding null character
so it return 5, not give 6 which is including \0 or null cahracter

strrev() > use to reverse a string
strrev("Hello");
it returns 'olleH'

strcpy() > use to copy one string into another
strcpy(s2,s1);
it copies s2 in s1

strcmp() > use to compare two given string
it give ascii value diffrence with character like
strcmp("hello","world"); 
so first it gives ascii value difference between first letter of hello and world
so ascii difference between h & w
if both word same then return 0
here h is 1st alphabet of hello and w is 1st alphabet of world
think 
h is 1st alphabet and w is 2nd alphabet 

think first alphabet comes before 2nd alphabet in alphabet table a to z or ascii table
then it returns negetive value like -1
if 1st alphabet comes after 2nd alphabet then it Returns A positive Value like 1
if both 1st alphabet and 2nd alphabet is same then return 0 but not always happen this some this can can also return 0 
think both word same 
1. hello 2. hello then it returns 0
if 1st hello contain capital H
Hello hello then it returns -1 // because here capital H 1st alphabet and comes Before small h in ascii table
&
hello Hello then it returns 1 // because here small h 1st alphabet and comes after Capital H in ascii table

now
java and js
here both's first is j
inthat case we can not return 0 because word's are diffrent
so we can move to the 2nd alphabet of both words which is
a & s
and a comes before s in ascii table that's why it returns -1
so if we compare java and js it returns -1 and if we compare js and java it returns 1

*/
#include<stdio.h>
#include<string.h>
int main(){
	char s1[]="Hello";
	char s2[]="World";
	char s4[]="Hello";
	char s5[]="World";
	char s6[]="digu";
	char s7[]="mota";
	char s8[52];
	//puts(strcat(s1,s2)); //here comined into s1, so s1="HelloWorld", and s2 remain same "world"
	printf("\nThe Combined String Of S1 & S2 is: %s",strcat(s1,s2));
	printf("\nThe Length Of S1 is After Combined: %d",strlen(s1));
	printf("\nThe Length Of S1 is Before Combined: %d",strlen(s4));
	printf("\nThe Length Of S2 is: %d",strlen(s2));
	//if previously strcat(s1,s2) given then s1 become hello world or combined and length turn into 10 not remain 5
	//if we remove strcat(s1,s2) from previous then s1 remain hello  and print length 5
	printf("\nThe Reverse Of S4 String is: %s",strrev(s4));
	//puts(strrev(s4));
	
	//we want to copy combined value of s6 and s7 in s8
	strcpy(s8,strcat(s6,s7)); //we can not write it like s8=strcat(s6,s7) it will show error
	printf("\ns8 is: %s",s8);
	//puts(s8)
	printf("\nCompare Table...");
	char c1[]="java";
	char c2[]="java";
	char c3[]="cpp";
	char c4[]="python";
	char c5[]="js";
	char c6[]="Java";
	char c7[]="Java";
	printf("\nCompare Between..");
	printf("\njava & java is : %d",strcmp(c1,c2));
	printf("\njava & Java is : %d",strcmp(c1,c6));
	printf("\nJava & java is : %d",strcmp(c6,c1));
	
	printf("\njava & js is : %d",strcmp(c1,c5));
	printf("\njs & java is : %d",strcmp(c5,c1));
	
	printf("\njava & python is : %d",strcmp(c1,c4));
	printf("\njava & cpp is : %d",strcmp(c1,c3));
	
	
	return 0;
}
/*
output:
The Combined String Of S1 & S2 is: HelloWorld
The Length Of S1 is After Combined: 10
The Length Of S1 is Before Combined: 5
The Length Of S2 is: 5
The Reverse Of S4 String is: olleH
s8 is: digumota
Compare Table...
Compare Between..
java & java is : 0
java & Java is : 1
Java & java is : -1
java & js is : -1
js & java is : 1
java & python is : -1
java & cpp is : 1
*/
//strcpy we can also use like strcpy(s1,"Hello"); s1 is a string 
