#include<stdio.h>
#include<conio.h>

void main(){
	float a,area;
	
	printf("Enter the side of Equilateral Triangle :-");
	scanf("%f",&a);
	
	area = (1.73*a*a)/4;
	
	printf("Area Of the Equilater Triangle:-%f",area);
	getch();
	
}
