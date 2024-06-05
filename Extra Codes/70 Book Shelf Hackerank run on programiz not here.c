//this program run in programiz
#include<stdio.h>
int main(){
	int s,q,t;
	int bp[100][100];
	printf("\nEnter No. Of Shelves: ");
	scanf("%d",&s);
	int bos[s];
	printf("\nEnter No. Of Queries: ");
	scanf("%d",&q);

for(int i=q;i>0;i--){

//while(q>0){
	printf("\nEnter Query Type: ");
	scanf("%d",&t);
	if(t==1){
		int r1,p,c1;
		printf("\nEnter Shelf No: ");
		scanf("%d",&r1);
		printf("\nEnter No Of Pages Of The Book : ");
		scanf("%d",&p);
		c1=bos[r1];
		bp[r1][c1]=p;
		bos[r1]=bos[r1]+1;
	}
	else if(t==2){
		int r2,b2;
		printf("\nEnter Shelf No: ");
		scanf("%d",&r2);
		printf("\nEnter Book No: ");
		scanf("%d",&b2);
		printf("\nPages: %d",bp[r2][b2]);		
	}
	else if(t==3){
		int r3;
		printf("\nEnter Shelf No: ");
		scanf("%d",&r3);
		printf("\nOn Shelf %d, No. Of Book is: %d",r3,bos[r3]);
	}
q--;
}
	
	return 0;
}