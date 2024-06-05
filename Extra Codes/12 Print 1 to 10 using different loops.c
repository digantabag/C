//print 1 to 10, using do whille, while & for loop
#include<stdio.h>
int main(){
	
	int d,w,f;
	
	printf("Do-While Loop...\n");
	//do-while
	d=0;
	do{
	d++;
	printf("%d ",d);
	}while(d<10);
	
	printf("\nWhile Loop...\n");
	//while
	w=0;
	while(w<10){
	w++;
	printf("%d ",w);
	}
	
	printf("\nFor Loop...\n");
	//for
	for(f=1;f<=10;f++){
	printf("%d ",f);	
	}

return 0;
}
	
	