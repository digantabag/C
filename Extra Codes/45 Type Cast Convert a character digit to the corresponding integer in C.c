/*
Type Cast: Convert a character digit to the corresponding integer in C
*/
#include<stdio.h>
#include<string.h>
int main(){
	char s[6]={'h','e','1','1','0','\0'};
	int n=strlen(s),i,c;
	for(i=0;i<n;i++){
		if(s[i]>='0' && s[i]<='9'){
			c =s[i]-'0';  
			printf("'%c' is %d\n",s[i],c);
		}
	}
	return 0;
}
/*
output:
'1' is 1
'1' is 1
'0' is 0
*/
/*
s[i]-'0'
by subtract with char 0
we can Convert a character numeric digit to the corresponding or equivalent integer number in C
this is one type of type casting
*/
