#include<stdio.h>
#include<conio.h>

void main(){
	char chp,ch;
	int no,cho,year,a,b,c;
	
	
	printf("\n 1. Check whether a number is divisible by 5 and 11 or not.");
	printf("\n 2. Check whether triangle is equilateral , isoscale  or scalene.");
	printf("\n 3. Check whether a year is leap year or not.");
	printf("\n 4. Input any alphabet and check whether it is vowel or consonant.");
	printf("\n 5. Input any character and check whether it is alphabet, digit or special symbol.");
	
	printf("\n Enter the Choice :-");
	scanf("%d",&cho);
	
	switch(cho){
		case 1: 
			printf("\n Enter the Number :-");
			scanf("%d",&no);
	
			if(no%5==0 && no%11==0){
				printf("\n %d is divisible by 5 and 11",no);
			}
			else{
				printf("\n %d is not divisible by 5 and 11",no);
			}
			break;
			
		case 2:
			printf("\n Enter the value of A,B,C :-");
			scanf("%d%d%d",&a,&b,&c);
			
			if(a==b && b==c){
				printf("\n this triangle is equilateral !!!");
			}
			else if(a==b || b==c || c==a){
				printf("\n this triangle is isosceles !!!!");
			}
			else{
				printf("\n this triangle is scalene !!!!");
			}
			break;
			
		case 3:
			printf("\n Enetr the Year :-");
			scanf("%d",&year);
			
			if((year%400==0) || (year%4==0)){
				printf("\n Leap Year");
			}
			else{
				printf("\n Not Leap Year");
			}
			break;
			
		case 4:
			printf("\n Enter the Character :-");
			scanf("%c",&chp);
				
			if(chp=='A'||chp=='E'||chp=='I'||chp=='O'||chp=='U'||chp=='a'||chp=='e'||chp=='i'||chp=='o'||chp=='u'){
				printf("\n %c is the Vowel",chp);
			}
			else{
				printf("\n %c is the consonant",chp);
			}
			break;
			
		case 5:
			printf("\n Enter the Character :-");
			scanf("%c",&chp);
			
			if((chp>='A' || chp<='Z') && (chp>='a' || chp<='z')){
				printf("\n %c is the Alphabet !!!",chp);
			}
			else if(chp>='0' || chp<='9'){
				printf("\n %c is the Digit !!!",chp);
			}
			else{
				printf("\n %c is the special Character !!!",chp);
			}	
			break;	
			
		default :
			printf("\n Invalid Choice !!!");	
	}
}
