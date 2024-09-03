#include<stdio.h>
#include<conio.h>

void main(){
	
	int resistance,current,voltage,v1,v2,c1,c2,r1,r2;
	
	printf("\n Enter the Value Of v1 :-");
	scanf("%d",&v1);
	
	printf("\n Enter the value of v2 :- ");
	scanf("%d",&v2);
	
	printf("\n Enter the value of c1 :- ");
	scanf("%d",&c1);
	
	printf("\n Enter the value of c2 :- ");
	scanf("%d",&c2);
	
	printf("\n Enter the value of r1 :-");
	scanf("%d",&r1);
	
	printf("\n Enter the value of r2 :- ");
	scanf("%d",&r2);
	
	resistance = v1/c1;
	printf("\n Resistance = %d",resistance);
	
	current = v2/r1;
	printf("\n Current = %d",current);
	
	voltage = c2*r2;
	printf("\n Voltage = %d",voltage);
	
	getch();
	
}
