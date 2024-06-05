/*
structure array to take multiple students
student
*/
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int id,marks;
}std[1000];//here we took structure variable as array to get more number of student


int main(){
	int i,n;

	printf("\nEnter Number Of Student: ");
	scanf("%d",&n);

	printf("\nEnter Student Details...\n");
	for(i=1;i<=n;i++){
		printf("\nStudent %d\n",i);
		printf("First Name: ");
		scanf("%s",&std[i].name);//for first name " %[^\n]s" for take full name with space and a blank space before % otherwise throw error
		printf("Id: ");
		scanf("%d",&std[i].id);
		printf("Marks: ");
		scanf("%d",&std[i].marks);
	};
	
	printf("\nName\t\tId\t\tMarks\n");
	printf("----\t\t--\t\t-----");
	for(i=1;i<=n;i++){
		printf("\n%s\t\t%d\t\t%d",std[i].name,std[i].id,std[i].marks);
	};
	
	return 0;
}
/*
output:
Enter Number Of Student: 3

Enter Student Details...

Student 1
First Name: Anamika
Id: 1
Marks: 47

Student 2
First Name: Diganta
Id: 2
Marks: 49

Student 3
First Name: Akash
Id: 3
Marks: 48

Name            Id              Marks
----            --              -----
Anamika         1               47
Diganta         2               49
Akash           3               48
*/
