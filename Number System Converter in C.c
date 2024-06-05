//Number Conversion
/*
Description: 
Here User Can Convert
Decimal To Binary, Octal, Hexadecimal
Binary To Decimal,Octal,Hexadecimal
Octal To Decimal,Binary,Hexadecimal
Hexadecimal To Decimal,Binary,Octal
*/


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int decimal(int d){	
	printf("\nWhich Type Of Number You Want To Convert...");
	printf("\n-------------------------------------------");
	printf("\n1. Binary Number\n2. Octal Number\n3. Hexadecimal Number\n4. Go Back\n5. Exit");
	printf("\n-------------------------------------------");
	printf("\nType: ");
	re:
	scanf("%d",&d);
	if(d<0 || d>5){
		printf("Wrong Input! Enter Again: ");
		goto re;
	}
	else{	
	return d;
}
}

void dtb(int n){
	int a[100],i=0;

	while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;
	}
	
	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}
}

void dto(int n){
	int a[100],i=0;

	
	while(n>0){
		a[i]=n%8;
		n=n/8;
		i++;
	}
	

	for(i=i-1;i>=0;i--){
		printf("%d",a[i]);
	}

}

void dth(int n){
	printf("%X",n);
}

int binary(int b){
	printf("\nWhich Type Of Number You Want To Convert...");
	printf("\n-------------------------------------------");
	printf("\n1. Decimal Number\n2. Octal Number\n3. Hexadecimal Number\n4. Go Back\n5. Exit");
	printf("\n-------------------------------------------");
	printf("\nType: ");
	re:
	scanf("%d",&b);
	if(b<0 || b>5){
		printf("Wrong Input! Enter Again: ");
		goto re;
	}
	else{	
	return b;
}
}

int btd(int n){
	int a[100],i=0,s=0,t;
	while(n>0){
		a[i]=n%10;
		n=n/10;
		t=a[i]*pow(2,i);
		s=s+t;
		i++;
	}
	
return s;
}

int octal(int o){
	printf("\nWhich Type Of Number You Want To Convert...");
	printf("\n-------------------------------------------");
	printf("\n1. Decimal Number\n2. Binary Number\n3. Hexadecimal Number\n4. Go Back\n5. Exit");
	printf("\n-------------------------------------------");
	printf("\nType: ");
	re:
	scanf("%d",&o);
	if(o<0 || o>5){
		printf("Wrong Input! Enter Again: ");
		goto re;
	}
	else{	
	return o;
}
}

int otd(int n){
	int a[100],i=0,s=0,t;
	while(n>0){
		a[i]=n%10;
		n=n/10;
		t=a[i]*pow(8,i);
		s=s+t;
		i++;
	}
return s;
}

int hex(int h){
	printf("\nWhich Type Of Number You Want To Convert...");
	printf("\n-------------------------------------------");
	printf("\n1. Decimal Number\n2. Binary Number\n3. Octal Number\n4. Go Back\n5. Exit");
	printf("\n-------------------------------------------");
	printf("\nType: ");
	re:
	scanf("%d",&h);
	if(h<0 || h>5){
		printf("Wrong Input! Enter Again: ");
		goto re;
	}
	else{	
	return h;
}
}

int htd(char hex[]){
	char ch;
	int c,i,d,dec=0,j=0;
	c=strlen(hex);
	
	for(i=c-1;i>=0;i--){	
	ch = hex[i];
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
	return dec;
}

int cb(int num){
int j;
while(num>0)
    {
        j=num%10;
        if( j!=0 && j!=1 )
        {
           return 0;
           break;
        }
        num=num/10;
        if(num==0)
        {
            return 1;
        }
    }
}

int co(int num){
	int j;
	while(num>0)
    {
        j=num%10;
        if( j==8 || j==9 )
        {
           return 0;
           break;
        }
        num=num/10;
        if(num==0)
        {
            return 1;
        }
    }
}

int ch(char hex[]){
	char ch;
	int c,i;
	c=strlen(hex);
	for(i=c-1;i>=0;i--){	
	ch = hex[i];
	if((ch>='0' && ch<='9') || (ch>='A' && ch<='F') || (ch>='a' && ch<='f')){
	 	continue;
		}
		else{
		return 0;
		}
}

}

int main(){
	
	int g,a,b,c,n,t,i;
	char s[100];
	
	again:	
	printf("\nWhich Type Of Number You Want To Enter...");
	printf("\n-----------------------------------------");
	printf("\n1. Decimal Number\n2. Binary Number\n3. Octal Number\n4. Hexadecimal Number\n5. Exit");
	printf("\n-----------------------------------------");
	printf("\nType: ");
	gain:
	scanf("%d", &a);

	if(a<=0 || a>5){
		printf("Number Doesn't Match Any Choise! Enter Again: ");
		goto gain;
	}

else
	 if(a>'0' || a<='5'){
	switch(a){
		case 1:	c=decimal(b);
				switch(c){
			   		case 1: printf("\nDecimal: ");
							scanf("%d",&n);
					   		printf("\nBinary: ");
					   		dtb(n);
					   		break;
			   			
			   		case 2:	printf("\nDecimal: ");
							scanf("%d",&n);
							printf("\nOctal: ");
					   		dto(n);
					   		break;
			   			
			   		case 3:	printf("\nDecimal: ");
							scanf("%d",&n);
					   		printf("\nHexadecimal: ");
					   		dth(n);
					   		break;
			   			
			   		case 4: goto again;
					   		break;
					   		
					case 5: goto end;
					   		break;
			   			
			   		default: break;
				   }
				break;
		
		case 2: c=binary(b);
				switch(c){
			   		case 1: printf("\nBinary: ");
							cbud:
							scanf("%d",&n);
							i=cb(n);
							if(i==0){
								printf("\nThis Is Not A Binary Number!");
								printf("\nEnter Again: ");
								goto cbud;
							}
							else
					   		t=btd(n);
					   		printf("\nDecimal: %d",t);
					   		break;
			   			
			   		case 2:	printf("\nBinary: ");
							cbuo:
							scanf("%d",&n);
							i=cb(n);
							if(i==0){
								printf("\nThis Is Not A Binary Number!");
								printf("\nEnter Again: ");
								goto cbuo;
							}
							else
					   		printf("\nOctal: ");
			   				t=btd(n);
			   		      	dto(t);  //we can also write it as dto(btd(n));
					   		break;
			   			
			   		case 3:	printf("\nBinary: ");
			   				cbuh:
							scanf("%d",&n);
							i=cb(n);
							if(i==0){
								printf("\nThis Is Not A Binary Number!");
								printf("\nEnter Again: ");
								goto cbuh;
							}
							else
					   		printf("\nHexadecimal: ");
					   		dth(btd(n));
					   		break;
			   			
			   		case 4: goto again;
					   		break;
					   		
					case 5: goto end;
					   		break;
			   			
			   		default: break;
				   }
				break;
			
		case 3: c=octal(b);
				switch(c){
			   		case 1: printf("\nOctal: ");
							coud:
							scanf("%d",&n);
							i=co(n);
							if(i==0){
								printf("\nThis Is Not A Octal Number!");
								printf("\nEnter Again: ");
								goto coud;
							}
							else
							t=otd(n);
					   		printf("\nDecimal: %d",t);
					   		break;
			   			
			   		case 2:	printf("\nOctal: ");
							coub:
							scanf("%d",&n);
							i=co(n);
							if(i==0){
								printf("\nThis Is Not A Octal Number!");
								printf("\nEnter Again: ");
								goto coub;
							}
							else
							printf("\nBinary: ");
					   		dtb(otd(n));
					   		break;
			   			
			   		case 3:	printf("\nOctal: ");
							couh:
							scanf("%d",&n);
							i=co(n);
							if(i==0){
								printf("\nThis Is Not A Octal Number!");
								printf("\nEnter Again: ");
								goto couh;
							}
							else
					   		printf("\nHexadecimal: ");
					   		dth(otd(n));
					   		break;
			   			
			   		case 4: goto again;
					   		break;
					   		
					case 5: goto end;
					   		break;
			   			
			   		default: break;
				   }
				break;
			
		case 4: c=hex(b);
				switch(c){
			   		case 1: printf("\nHexadecimal: ");
							chud:
							scanf("%s",s);
							i=ch(s);
							if(i==0){
								printf("\nThis Is Not A Hexadecimal Number!");
								printf("\nEnter Again: ");
								goto chud;
							}
							else
							t=htd(s);
							printf("\nDecimal: %d",t);
					   		break;
			   			
			   		case 2:	printf("\nHexadecimal: ");
							chub:
							scanf("%s",s);
							i=ch(s);
							if(i==0){
								printf("\nThis Is Not A Hexadecimal Number!");
								printf("\nEnter Again: ");
								goto chub;
							}
							else
							printf("\nBinary: ");
					  		dtb(htd(s));
					   		break;
			   			
			   		case 3:	printf("\nHexadecimal: ");
							chuo:
							scanf("%s",s);
							i=ch(s);
							if(i==0){
								printf("\nThis Is Not A Hexadecimal Number!");
								printf("\nEnter Again: ");
								goto chuo;
							}
							else
					   		printf("\nOctal: ");
					   		dto(htd(s));
					   		break;
			   			
			   		case 4: goto again;
					   		break;
					   		
					case 5: goto end;
					   		break;
			   			
			   		default: break;
				   }
				break;
		
		case 5: printf("\nThank You...");
			      goto end;
				  break;
		
		default: break;
	}
}

	else{ 
		printf("\nInvalid Input! Enter A Valid Number: ");
		goto gain; }	

printf("\n");

char ch[10];
	printf("\nWant To Use Rapid Table Again (y for Yes/n for No): ");
	down:
	scanf("%s",ch);
	int z;
	for(i=0;i<1;i++){
	
	if(ch[i]=='y'||ch[i]=='Y'){
		system("cls");
		goto again;
	}
	else if(ch[i]=='n'||ch[i]=='N'){
		printf("\nThank You...");
		goto end;
	}
	else {
		printf("\nInvalid Input! Enter Again: ");
		goto down;
		} 
	}
	
	end:
	return 0;
	
}

/*
output:
Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 1

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Binary Number
2. Octal Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 2

Decimal: 12

Octal: 14

Want To Use Rapid Table Again (y for Yes/n for No): yes

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 1

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Binary Number
2. Octal Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 12
Wrong Input! Enter Again: 1

Decimal: 12

Binary: 1100

Want To Use Rapid Table Again (y for Yes/n for No): YES

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 1

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Binary Number
2. Octal Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 3

Decimal: 12

Hexadecimal: C

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 2

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Octal Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 1

Binary: 1100

Decimal: 12

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 2

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Octal Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 3

Binary: 1100

Hexadecimal: C

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 2

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Octal Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 2

Binary: 1100

Octal: 14

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 3

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Binary Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 3

Octal: 14

Hexadecimal: C

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 3

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Binary Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 3

Octal: 18

This Is Not A Octal Number!
Enter Again: 17

Hexadecimal: F

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 3

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Binary Number
3. Hexadecimal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 1

Octal: 17

Decimal: 15

Want To Use Rapid Table Again (y for Yes/n for No): y

Which Type Of Number You Want To Enter...
-----------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Hexadecimal Number
5. Exit
-----------------------------------------
Type: 4

Which Type Of Number You Want To Convert...
-------------------------------------------
1. Decimal Number
2. Binary Number
3. Octal Number
4. Go Back
5. Exit
-------------------------------------------
Type: 2

Hexadecimal: c

Binary: 1100

Want To Use Rapid Table Again (y for Yes/n for No): n

Thank You...
*/