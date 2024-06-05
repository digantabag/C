/*
Structure
structure is important for advanced level c programming
structures are user defined datatypes
structure used to combine different types of data types
think int,float,char,char array combined and make a structure
so we can make complex datatype which contains diverse or different information like int float char
this is similar like array 
array contains only int or only float or only char values
int the other hand structure contains or combine different data types

think we have to store 4 employee details of 100 employees
so if we normally do
char name1[50];
char add1[50];
char email1[50];
inr eid1;

this is for only 1 and we have to do for 99 for
so we need to create 400 datatypes which is not feasible or practically possible
so we use use structures which contains those 4 entities name,add,email,eid
syntax to define structure

struct [structure_name]{
	datatype var 1
	datatype var 2
}
[structure_variables]

//structure declaration type 1
struct student{
	int id;
	int marks;
	char fav_char;	
}s1,s2,s3;//for 3 student


//structure declaration type 2
struct student{
	int id; //memeber of structure
	int marks;
	char fav_char;	
};

struct student s1,s2,s3;//or inside main


int main(){
	struct studen s4;//we can also create a datatyype var here like this
	//value assign examples
	//like array accessed by [] similarly structure memeber accessed by dot or . operator 
	//dot or . is called as structure member operator
	//structurename(s1,s2,s3..).member(id)
	s1.id=1;
	s1.marks=5;
	s1.fav_char='a';
struct studen s5={1,2,'a'};;
s2={2,3,'b'};

	return 0;
}

*/

#include<stdio.h>
#include<string.h>
struct student{
	int id;
	float marks;
	char fav_char;
	char name[50];	
};
/*
struct student s1,s2,s3;//in that posotion it is global variable we can use it in another function like
check program no. 33 for local and global variables
void print(){
	printf("%s",s1.name);
}
this function applicable when s1 is global
*/
int main(){
	struct student s1,s2,s3;//if it's declared outside main then it is global variable
	//it is local variable
	//if name of a local & global variable is same then local variable took presidency
	s1.id=1;
	s2.id=2;
	s3.id=3;
	s1.marks=11;
	s2.marks=12;
	s3.marks=13;
	s1.fav_char='a';
	s2.fav_char='b';
	s3.fav_char='c';
	strcpy(s1.name,"Digu");
	//s2.name="anamutu"; we can not write like this this throw error for structure
	//digu string copy in s1.name
	//gets(s2.name); we also take user input like that
	printf("\n%c s1 with id %d got %.f marks name: %s", s1.fav_char,s1.id,s1.marks,s1.name);
	printf("\n%c s2 with id %d got %.f marks name: %s", s2.fav_char,s2.id,s2.marks,s2.name);
	
	//print() not work because here s1 is global variable
	return 0;
}
//print information of given student