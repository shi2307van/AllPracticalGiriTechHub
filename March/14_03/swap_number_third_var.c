#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c;
	
	printf("Enetr the value of A:-");
	scanf("%d",&a);
	
	printf("\n Enter the valur of B:-");
	scanf("%d",&b);
	
	printf("\n Before swap value of A = %d and B = %d",a,b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\n After swap value of A = %d and B = %d",a,b);
	
	getch();
}
