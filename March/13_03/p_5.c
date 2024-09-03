#include<stdio.h>
#include<conio.h>

void main(){
	float cm,m,km;
	
	printf("\n Enter the length in centimeter :- ");
	scanf("%f",&cm);
	
	m = cm/100.00;
	km = cm/100000.000;
	
	printf("\n Centimeter to Meter :- %.2f",m);
	printf("\n Centimeter to kolimeter :- %.2f",km);
	
	getch();
}
