/*
Diffrence Between i++ & ++j
*/

#include<stdio.h>
int main(){

	int a,b;
	int i=1,j=1;
	a=i++;//here a=1, but it mean after a task i=1+1=2 so in a i=1 and after a i=2
	b=++j; // here ++j mean 1=1+j or in b=1+j so b=2 here in b value of chaged not after b so in b j=1+1=2 also after b, j=2
	int c=i; //previously after a value of i changed so because c=i=2
	int d=j;//j=2
	int e=++j;//j's value changed here j=3
	printf("\ni=%d j=%d c=%d d=%d, e=%d",a,b,c,d,e);
	return 0;
}

/*
output: i=1 j=2 c=2 d=2, e=3
*/

//but in case of loops i++ and ++i or i-- or --i work same

#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		printf("%d ",i);
	}
	
	printf("\n");
	
	for(j=1;j<=10;++j){
		printf("%d ",j);
	}
	
	return 0;
}
/*
output:
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
*/