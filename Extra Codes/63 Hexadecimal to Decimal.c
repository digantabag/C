/*
Hexadecimal To Decimal Number
*/
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char hex[100],ch;
	int c,d;
	int i,dec,j;
	printf("\nEnter The Hex Number: ");
    //dont give dec,j=0 here otherwise for wrong input value of d remain as previous but we need to start from 0
	again:
	gets(hex);
	//scanf("%s",hex);
	dec=0,j=0;
	c=strlen(hex);
	d=c-1;
	for(i=d;i>=0;i--){	
	ch = hex[i];
	if((ch>='0' && ch<='9') || (ch>='A' && ch<='F') || (ch>='a' && ch<='f')){
	 	switch(ch){
			case 'A':	d=10;
						break;
						
			case 'a':	d=10;
						break;
						
			case 'B':	d=11;
						break;
						
			case 'b':	d=11;
						break;
						
			case 'C':	d=12;
						break;
						
			case 'c':	d=12;
						break;
						
			case 'D':	d=13;
						break;
						
			case 'd':	d=13;
						break;
						
			case 'E':	d=14;
						break;
						
			case 'e':	d=14;
						break;
		
			case 'F':	d=15;
						break;
						
			case 'f':	d=15;
						break;

			default:	d=ch-'0';
						break;
		}

dec=dec+d*pow(16,j);
j++;
}

else{
	printf("\nThis Is not Hex! Enter Correct Hexadecimal Number: ");
	goto again;
}

}
printf("\nDecimal: %d",dec);

	return 0;
}
/*
output;
Enter The Hex Number: F1
Decimal: 241
*/
