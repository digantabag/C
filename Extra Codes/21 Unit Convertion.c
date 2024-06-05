/*exercise
unit converter: 
1. kms to miles
2. inches to feet
3. cms to inches
4. pound to kgs
5. inches to meters

give user to perform which operation he/she wants of perform

formula
1 km = 0.621 miles
12 inches = 1 feet so 1 inch = 0.0833 feet
1 cm = 0.394 inches
1 pound = 0.454 kg
1 inch = 0.0254 meter
*/

#include<stdio.h>
void ktm(){
	float km;
	printf("\nPlease Enter The Km Value: ");
	scanf("%f",&km);
	float r;
	r=km*0.621;
	printf("\n%.2f Km = %.2f Miles",km,r);
}

void itf(){
	float in;
	printf("\nPlease Enter The Inch Value: ");
	scanf("%f",&in);
	float r;
	r=in*0.0833;
	printf("\n%.2f Inches = %.2f Feet",in,r);
}

void cti(){
	float cm;
	printf("\nPlease Enter The Cm Value: ");
	scanf("%f",&cm);
	float r;
	r=cm*0.394;
	printf("\n%.2f Cm = %.2f Inch",cm,r);
}

void ptk(){
	float po;
	printf("\nPlease Enter The Pound Value: ");
	scanf("%f",&po);
	float r;
	r=po*0.454;
	printf("\n%.2f Pound = %.2f Kg",po,r);
}

void itm(){
	float in;
	printf("\nPlease Enter The Inch Value: ");
	scanf("%f",&in);
	float r;
	r=in*0.0254;
	printf("\n%.2f Inches = %.2f Meter",in,r);
}

int main(){
	int n;
	again:
	printf("\nUnits and Conversions...");
	printf("\n------------------------");
	printf("\nType 1 For Convert Kms to Miles");
	printf("\nType 2 For Convert Inches to Feets");
	printf("\nType 3 For Convert Cms to Inches");
	printf("\nType 4 For Convert Pounds to Kgs");
	printf("\nType 5 For Convert Inches to Meters");
	printf("\nType 6 For Exit\n");
	printf("\nEnter Your Choise: ");
	up:
	scanf("%d",&n);
	if(n<1||n>6){
		printf("\nInvalid Input!...Enter Your Choise Again: ");
		goto up;
	}
	else if(n==6){
		printf("\nBye...");
		goto end; 
	}
	else {
	switch(n){
		case 1: ktm();
				break;
		
		case 2: itf();
				break;
		
		case 3: cti();
				break;
		
		case 4: ptk();
				break;
		
		case 5: itm();
				break;
		
		default: break;
	}
}
	int c;
 	printf("\n\nDo You Want To Convert Unit Again ?\nType 1 For Yes\nType 0 For No\nEnter Your Choise: ");
 	down:
	scanf("%d",&c);
 	if(c==1){
 		goto again;
	 }
	else if(c==0){
		printf("\nBye...");
		goto end; 
	}
	else {
		printf("\nInvalid Input!...Enter Your Choise Again: ");
		goto down;
	}
	end:
	return 0;
}

/*
//code by harry; 

#include <stdio.h>

int main()
{
    
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1) 
   {
       printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

       scanf(" %c", &input);
    //    printf("The character is '%c'", input);
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
        break;

        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToFoot;
        printf("%f Inches is equal to %f Foot\n", first, second);
        break;

        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("%f Cms is equal to %f Inches\n", first, second);
        break;

        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * poundToKgs;
        printf("%f Pounds is equal to Kgs %f \n", first, second);
        break;

        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        second = first * inchesToMeters;
        printf("%f inches is equal to %f meters \n", first, second);
        break;

       default:
       printf("In default now");
           break;
       }
   }
   end:

    return 0;
}
//while(1){} mean infinite while loop and q for quit from infinite loop
//if we use while(0) it show error and end program with return type
//we use while(1){} it means no condition needed for 1 mean it loop himself 1 time again after complete 1 loop then again 1 time
//like in previous we give user to choose he wants to perform again or not , that same case with loop but every time yes and user have option to quit
*/