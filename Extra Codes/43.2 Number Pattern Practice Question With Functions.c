/*
for 3
3 3 3 3 3
3 2 2 2 3
3 2 1 2	3
3 2 2 2	3
3 3	3 3 3

for 4
square side 2*4-1=7
4 4 4 4 4 4 4
4 3 3 3	3 3	4
4 3	2 2 2 3	4
4 3	2 1	2 3 4
4 3	2 2 2 3	4
4 3	3 3 3 3	4
4 4 4 4 4 4 4
*/
#include<stdio.h>
void print(int arr[100][100],int size){
		int i,j;
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
					printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
}

void set(int arr[100][100],int size, int len){
	int f,s,b,i,j;
	f=0;
	b=size-1;
	while(len!=0){
		for(i=f;i<=b;i++){
			for(j=f;j<=b;j++){
				if(i==f || i==b || j==f || j==b){
					arr[i][j]=len;
				}
			}
		}
	f++;
	b--;
	len--;
	}
}

int main(){
	int n,s,a[100][100];
	printf("\nEnter Length: ");
	scanf("%d",&n);
	printf("\n");
	s=(2*n)-1;
	set(a,s,n);
	print(a,s);
	
	return 0;
}
/*
Output:
Enter Length: 3 //max 58 othewise segmentation error for large number chechk 43.3

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/

