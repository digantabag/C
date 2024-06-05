/*
Find Avarage
*/

#include<stdio.h>
int main(){
	float s=0,n,m,a,i;
	printf("\nEnter Number Of Element: ");
	scanf("%f",&n);
	printf("\nEnter Numbers:\n");
	for(i=0;i<n;i++){
		scanf("%f",&m);
		s=s+m;
	}
	a=s/n;
	printf("\nAvarage is: %.2f",a);
	return 0;
}

//using array
#include<stdio.h>
int main(){
	int m,i;
	float s=0,n[100],a;
	printf("\nEnter Number Of Element: ");
	scanf("%d",&m);//here we have to set &m as intger because array maybe float but count or size of array always be int arr[3] not arr[3.5]
	printf("\nEnter Numbers:\n");
	for(i=0;i<m;i++){
		scanf("%f",&n[i]);
		s=s+n[i];
	}
	a=s/m;
	printf("\nAvarage is: %.2f",a);
	return 0;
}

/*
output:

Enter Number Of Element: 5

Enter Numbers:
1
2
3
4
5

Avarage is: 3.00
*/

