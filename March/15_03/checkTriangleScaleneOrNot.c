#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c;
	
	printf("\n Enter the 3 sides of triangle :-");
	scanf("%d%d%d",&a,&b,&c);
	
	(a==b && b==c) ? printf("\n this triangle is equilateral !!!") :
		(a==b || b==c || c==a) ? printf("\n this triangle is isosceles !!!!"): printf("\n this triangle is scalene !!!!");
		
		getch();
			
}
