/*
question: took 2 names and tell 1 is friend of 2
*/

#include<stdio.h>
#include<string.h>
int main(){
	char s1[20];
	char s2[20];
	char s3[]=" Is A Friend Of ";
	printf("\nEnter 1st Name: ");
	//scanf("%s",s1); //it cant take space We cannot write diganta as diga nta
	gets(s1); //using gets we can take space like we can write diganta as diga nta also
	printf("\nEnter 2nd Name: ");
	//scanf("%s",s2);//if we have use scanf before so we have to use scanf here also otherwise throw error not use gets if scanf given before
					//if we use gets() before then here we can use this scanf optional also 
	gets(s2);
	printf("\n");
	puts(strcat(s1,strcat(s3,s2)));
	return 0;
}

/*
Enter 1st Name: Diganta Bag

Enter 2nd Name: Akash Sil

Diganta Bag Is A Friend Of Akash Sil
*/
/*
scanf("%[^\n]s",s);
[^\n] it means it will read all characters until you reach \n or press enter
so by using it we can take blank spaces using scan or we can write diganta as diga nta
and we dont need to use this in printf if we use in scanf only give in scanf
*/

#include<stdio.h>
int main(){
	char s[100],n[100], l[100];
	
	printf("By Using %[^\\n]s\n");
	printf("Enter Name: ");
	scanf("%[^\n]s",s);
	printf("Name: ");
	printf("%s",s);
	
	printf("\n\nBy Using only %%s & without blank space");
	printf("\nEnter Name: ");
	scanf("%s",l);
	printf("Name: ");
	printf("%s",l);
	
	printf("\n\nBy Using only %%s & and giving space");
	printf("\nEnter Name: ");
	scanf("%s",n);
	printf("Name: ");
	printf("%s",n);
	
	return 0;
}

/*
output:
By Using [^\n]s
Enter Name: diga nta
Name: diga nta

By Using only %s & without blank space
Enter Name: diganta
Name: diganta

By Using only %s & and giving space
Enter Name: diga nta
Name: diga         //here 'nta' not prints after 'diga'  because normal scanf not accept blank spaces

*/