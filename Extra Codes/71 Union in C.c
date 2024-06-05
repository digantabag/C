/*
Union
union is same as structure and also declare like structure
Difference Between Union And Structure Is 
in structure each members has it's own storage location
and all can access at one time

and in union members use a single shared memory location
and only one member can access at one time if we going to access all members then others only one members will be right and others will be corrupted 

example;
in structure

struct emp{
	int id; //4 bytes
	char name[34];//34 bytes
};

here whole structure take 38 bytes
and both member can access at one time 

in union

union emp{
	int id; //4 bytes
	char name[34];//34 bytes
};

here whole union take only 34 bytes because here big address member took 34
and int 4 bytes memory shared with char
but here we can only access 1 member id either name

example;
3 drums
d1,d2.d3
d1 needs 2 stick and played in day
d2 needs 2 stick and played in noon
d3 needs 3 stick and played in night

in union we can buy 3 sticks from market and played with same sticks with different time
in structure we buy 7 sticks and we play all the drums at one time or in different times
*/
//in structure
/*
#include<stdio.h>
#include<string.h>
struct student{
	int id;
	float marks;
	char fc;
	char name[34];
};

int main(){
	struct student s1;
	s1.id=17;
	s1.marks=45;
	s1.fc='A';
	strcpy(s1.name,"Diganta");
	
	printf("\nId: %d",s1.id);
	printf("\nMarks: %.f",s1.marks);
	printf("\nFavourite Character: %c",s1.fc);
	printf("\nName: %s",s1.name);
	
	return 0;
}
*/
/*
output;
Id: 17
Marks: 45
Favourite Character: A
Name: Diganta
*/

//in union
#include<stdio.h>
#include<string.h>
union student{
	int id;
	float marks;
	char fc;
	char name[34];
};

int main(){
	union student s1;
	s1.id=17;
	s1.marks=45;
	s1.fc='A';
	strcpy(s1.name,"Diganta");
	//s1.marks=45;
	
	printf("\nId: %d",s1.id);
	printf("\nMarks: %.f",s1.marks);
	printf("\nFavourite Character: %c",s1.fc);
	printf("\nName: %s",s1.name);
	
	return 0;
}
/*
output;
Id: 1634167108
Marks: 266798941793706570000
Favourite Character: D
Name: Diganta

here we see every thing is corrupted only name print properly because name mention in last
if
marks  give in last then it prints
Id: 1110704128
Marks: 45
Favourite Character:
Name:
*/