/*
string freq
check program 44 and 45 also
*/
#include<stdio.h>
#include<string.h>


int main(){
	int n,i,c,f[10]={0};//f[10]={0} mean every 10 position of array is 0 value
	char s[1000];
	printf("\nEnter String: ");
	gets(s);
	printf("\nString: ");
	puts(s);
	n=strlen(s);
	for(i=0;i<n;i++){ //n is length of string or i run until length of string
	//here loop to read string elements
	//here if char s[6]={'h','e','1','1','0','\0'};
	//then s[0]=h,s[1]=e,s[2]=1,s[3]=1,s[4]=0
		if(s[i]>='0' && s[i]<='9'){ //charcters in string getting skipped with this condition
		//here condition done by ascii table because it's char array not int //in ascii table 1st comes 0-9,then A-Z,Then a-z
			c =s[i]-'0';  //one type of type casting to Convert a character numeric digit to the corresponding equivalent integer number in C
			//if s[i]='1', here 1 is a char, we subtract with char 0 to make 1 an int
			//look 45 to know more about this type conversion
			//if c=1
			//f[1]++ because f[1]=0 so f[1]++=f[1]+1=0+1=1
			f[c]++ ;//look program 44 for more details
			//we take int c as integer because a postion of array always an integer but value can be char or int depends on datatype
			//f[1] is valid & f[a] is invalid but f[1]='a'
			}
		}

	for(i=0;i<10;i++){
		printf("\nFreq Of %d is: %d",i,f[i]);
	}

	return 0;
}
/*
output;
Enter String: a1b12c321d

String: a1b12c321d

Freq Of 0 is: 0
Freq Of 1 is: 3
Freq Of 2 is: 2
Freq Of 3 is: 1
Freq Of 4 is: 0
Freq Of 5 is: 0
Freq Of 6 is: 0
Freq Of 7 is: 0
Freq Of 8 is: 0
Freq Of 9 is: 0
*/
