/*
//with int
#include<stdio.h>
int main(){
	int m,s;
	printf("\nPlease Select The Subject You Pass...");
	printf("\nPress 1 for Yes\nPress 0 for No\n");
	printf("\nDid You Pass In Math: ");
	scanf("%d",&m);
	printf("\nDid You Pass In Science: ");
	scanf("%d",&s);
	if(m==1 && s==1){
		printf("\nCongratulation, You Succesfully Passed Both Exam And You Will Win Rs.50");
	}
	else if(m==1 && s==0){
		printf("\nYou Only Pass In Math Exam And You Win Rs.20");
	}
	else if(m==0 && s==1){
		printf("\nYou Only Pass In Science Exam And You Win Rs.20");
	}
	else if(m==0 && s==0){
		printf("\nSorry To Say But You Failed In Both Exam, Try Hard Next Time...");
	}
	else{
		printf("\nWrong Input!");
	}
	return 0;
}
*/
//with char
#include<stdio.h>
int main(){
	char m,s;
	printf("\nPlease Select The Subject You Pass...");
	printf("\nPress y for Yes\nPress n for No\n");
	printf("\nDid You Pass In Math: ");
	scanf(" %c",&m);//we have left a blank space before %c otherwise you get a error in output
	printf("\nDid You Pass In Science: ");
	scanf(" %c",&s);
	
	if(m=='y' && s=='y'){//for int value we can write m==1 but for char we have to give '' like m=='y' and a space before %c or taking value
		//if we write "y" in double " it becomes strings
		//that's why we use 'y' double ' mean char
		printf("\nCongratulation, You Succesfully Passed Both Exam And You Will Win Rs.50");
	}
	else if(m=='y' && s=='n'){
		printf("\nYou Only Pass In Math Exam And You Win Rs.20");
	}
	else if(m=='n' && s=='y'){
		printf("\nYou Only Pass In Science Exam And You Win Rs.20");
	}
	else if(m=='n' && s=='n'){
		printf("\nSorry To Say But You Failed In Both Exam, Try Hard Next Time...");
	}
	else{
		printf("\nWrong Input!");
	}
	return 0;
}