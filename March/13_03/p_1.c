#include<stdio.h>
#include<conio.h>

void main(){
	
	int a,b,c;
	
	printf("\n Enter the Value Of First Side Of Triangle:- ");
	scanf("%d",&a);
	
	printf("\n Enter the Value of Second Side Of Triangle :-");
	scanf("%d",&b);
	
	c = 180-(a+b);
	
	printf("\n Remain Third Side of the Triangle is :- %d ",c);
	
	getch();
}
