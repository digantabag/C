#include<stdio.h>
int main(){
	int n;
	float a,b,c;
	printf("\nWelcome To Simple Calculator...");
	printf("\n-----------------------------");
	
	up:
	printf("\n\nType 1 for Summation\nType 2 for Subtraction\nType 3 for Multiplication\nType 4 for Division\nType 5 for Quit\n\nEnter Your Choice: ");
	scanf("%d",&n);
	
	if(n>5 || n<1){ 
					printf("\nInvalid Input!\n\nKindly Enter A Valid Input");
					goto up;				  
				  }
				  
	else if(n==5){//if we use char then we have to write n=='5' or n=='y'
					goto end; 
	             }
	else{		
	printf("\nEnter The 1st Number: ");
	scanf("%f",&a);
	printf("Enter The 2nd Number: ");
	scanf("%f",&b);
	
	switch(n){
		case 1: c=a+b;
				printf("\nSum = %.f\n",c);
				break;
		
		case 2: c=a-b;
				printf("\nSubtract = %.f\n",c);
				break;
		
		case 3: c=a*b;
				printf("\nMultiply = %.f\n",c);
				break;
		
		case 4: c=a/b;
				printf("\nDivide = %.3f\n",c);
				break;

		default: break;
	}
}

	printf("\nDo You Want To Use Simple Calculator Again ?");
	char ch;
	down:
	printf("\nType Y for Yes & N for No: ");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y'){
		goto up;
	}
	
	else if(ch=='n' || ch=='N'){
		goto end;
	}
	
	else {
			printf("\nInvalid Input!\nType Again...");
			goto down;
	}
	
	end:
	printf("\nThank You For Using Simple Computer...Bye.");
	return 0;
}