/*
Typedef in structure

for structure whole structure conatain datype is previous name
for example

previous name
struct student{
	int id;
	float marks;
	char name[50];	
};

new name std;

so we werite it as

typedef struct student{
	int id;
	float marks;
	char name[50];	
} std;

//we can write struct student s1,s2;
here 
std s1,s2;

*/
#include<stdio.h>

typedef struct student{
	int id;
	float marks;
	char name[50];	
} std;

int main(){
	std s1,s2;//use of type def
	s1.id=1;
	s2.id=2;
	printf("\ns1 id = %d",s1.id);
	printf("\ns2 id = %d",s2.id);
	return 0;
}
/*
output:
s1 id = 1
s2 id = 2
*/
