#include<stdio.h>
#include<conio.h>

void main(){
	int radius,dia,area,circ;
	
	printf("\n Enter the radius of the circle:-");
	scanf("%d",&radius);
	
	dia= 2*radius;
	circ = 2*3.14*radius;
	area = 3.14*radius*radius;
	
	printf("\n Diamenete of Circle is :- %d",dia);
	printf("\n Area of Circle is :- %d",area);
	printf("\n Circumference of Cirlce is :- %d",circ);
}
