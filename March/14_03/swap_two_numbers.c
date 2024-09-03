#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b;
	
	printf("\n Enter the value of A :-");
	scanf("%d",&a);
	
	printf("\n Enter the value of B:-");
	scanf("%d",&b);
	
	printf("\n Before swap the A = %d and B = %d",a,b);
	 
	//a = 10;b=20;
	a = a+b; // a=10+20(30)
	b = a-b; // b=30-20(10)
	a = a-b; // a=30-10(20)
	
	printf("\n After swap the A = %d and B = %d",a,b);
	
	getch();
	
}
