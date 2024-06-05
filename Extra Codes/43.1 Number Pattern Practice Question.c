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
int main(){
	int n,i,j,f,s,b,a[100][100];
	printf("\nEnter Length: ");
	scanf("%d",&n);
	printf("\n");
	f=0;
	s=(2*n)-1;
	b=s-1;
	while(n!=0){
		for(i=f;i<=b;i++){
			for(j=f;j<=b;j++){
				if(i==f || i==b || j==f || j==b){
					a[i][j]=n;
				}
			}
		}
	f++;
	b--;
	n--;
	}
	

	for(i=0;i<s;i++){
			for(j=0;j<s;j++){
					printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	
	return 0;
}
/*
Output:
Enter Length: 3

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/
/*
explaination:

n=3
f=0 front
s=2*3-1=5
b=5-1=4 back

while(n!=0) loop ends when n=0
n=3,f=0,b=4
i=f,i<=b,i++ mean i=0,1,2,3,4
j=f,j<=b,j++ mean j=0,1,2,3,4
if(i==f || i==b || j==f || j==b){ mean when i=0 or 4 or j=0 or 4 
					a[i][j]=n=3;
				}
case  o row 0 column or i=0,j=0 so in  matrix position a[0][0] value set to n or 3
all true case position are
first digit i, second digit j, condition i=0 or i=4 or j=0 or j=4

00 01 02 03 04
10          14
20          24
30          34
40 41 42 43 44

all position value set n or 3 and if it's print it looks like
3 3 3 3 3
3       3
3       3
3       3
3 3 3 3 3

now f++,b--,n--
so 
f=0+1=1
b=4-1=3
n=3-1=2
i=f,i<=b,i++ mean i=1,2,3
j=f,j<=b,j++ mean j=1,2,3
if(i==f || i==b || j==f || j==b){ mean when i=1 or 3 or j= 1 or 3 
					a[i][j]=n=2;
				}
case  1 row 1 column or i=1,j=1 so in  matrix position a[1][1] value set to n or 2
all true case position are
first digit i, second digit j, condition i=1 or i=3 or j=1 or j=3

11 12 13
21    23
31 32 33

all position value set n or 2 and if it's print it looks like
2 2 2
2   2
2 2 2

now f++,b--,n--
so 
f=1+1=2
b=3-1=2
n=2-1=1
i=f,i<=b,i++ mean i=2
j=f,j<=b,j++ mean j=2
if(i==f || i==b || j==f || j==b){ mean when i=2 or j= 2 
					a[i][j]=n=1;
				}

so because i or j both is 2 so here only one position which is
22 or 2 row 2 column 
so n=1 value set at a[2][2]

now f++,b--,n--
so 
f=2+1=3
b=2-1=1
n=1-1=0

so n=0 so loop ends here
and at end we print matrix like 2d array
	for(i=0;i<s;i++){
			for(j=0;j<s;j++){
					printf("%d ",a[i][j]);
			}
			printf("\n");
		}
s=5 so all value of i=0,1,2,3,4 & j=0,1,2,3,4
if we print position it looks like
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44 

and if we print with value it looks like
3 3 3 3 3
3 2 2 2 3
3 2 1 2	3
3 2 2 2	3
3 3	3 3 3

*/
