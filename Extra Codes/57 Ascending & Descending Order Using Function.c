/*
Ascending & Descending Order Using Function
*/
#include<stdio.h>
void asc(int *a, int n){
	int t,i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				//swap
				t=a[i];
				a[i]=a[j];
				a[j]=t;			
			}
		}
	}
	
	printf("\nAscending Order:");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}

void desc(int *a, int n){
	int t,i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				//swap
				t=a[i];
				a[i]=a[j];
				a[j]=t;			
			}
		}
	}
	
	printf("\nDescending Order:");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}

void gad(int *a, int n){
	int i;
	printf("\nEnter Numbers...\n");
	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nAll Numbers:");
	for(i=0;i<n;i++){
		printf(" %d",a[i]);
	}
}
int main(){
	int a[100],n;
	
	printf("\nEnter Total Numbers You Want To Enter: ");
	scanf("%d",&n);
	
	gad(a,n);
	asc(a,n);
	desc(a,n);
	
	return 0;
}
/*
output:
Enter Total Numbers You Want To Enter: 10

Enter Numbers...
a[0]: 7
a[1]: 6
a[2]: 9
a[3]: 8
a[4]: 5
a[5]: 4
a[6]: 1
a[7]: 0
a[8]: 3
a[9]: 2

All Numbers: 7 6 9 8 5 4 1 0 3 2
Ascending Order: 0 1 2 3 4 5 6 7 8 9
Descending Order: 9 8 7 6 5 4 3 2 1 0
*/