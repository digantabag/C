/*
marks
even position array for boys
odd position array for girls
for example
a[0,2,4,6,8,.....] position contains marks of boys
a[1,3,5,7,9,.....] position contains marks of girls
take all marks in 1d array think marks are
12,23,13,15,24,21,22,14
from this marks
12,13,24,22 are marks of boys
and
23,15,21,14 are marks of girls
we have find sum of boys or girls's marks by giving there gender
and take marks and number of student through user input
*/
#include <stdio.h>
int sumb(int *arr,int l){//for boys
    int i,c=0;
    for(i=0;i<l;i=i+2){//i=0,2,4,6,8....
        c=c+arr[i];
    }
    return c;
}

int sumg(int *arr,int l){//for girls
    int i,c=0;
    for(i=1;i<=l;i=i+2){//i=1,3,5,7,9....
        c=c+arr[i];
    }
    return c;
}


int main(){
    int i,a[1000],n,y,x;
    char s;
    
    printf("\nEnter Number Of Students: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    	printf("Enter The Marks Of Student %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter Gender...\nb for boy\ng for girls\nGender: ");
    scanf(" %c",&s);//alsways give blank space before %c otherwise throw error
    
	if(s=='b' || s=='B'){
    	y = sumb(a,n);
		printf("\nSum Of Marks Of Boys: %d",y);
    }
    if(s=='g' || s=='G'){
        x = sumg(a,n);
		printf("\nSum Of Marks Of Girls: %d",x);
    }

    
    return 0;
}
/*
output;
Enter Number Of Students: 6
Enter The Marks Of Student 1: 8
Enter The Marks Of Student 2: 5
Enter The Marks Of Student 3: 7
Enter The Marks Of Student 4: 6
Enter The Marks Of Student 5: 4
Enter The Marks Of Student 6: 4

Enter Gender...
b for boy
g for girls
Gender: b

Sum Of Marks Of Boys: 19
*/
