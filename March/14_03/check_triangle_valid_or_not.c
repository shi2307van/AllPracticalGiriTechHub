#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c,sum;
	
	printf("\n Enter the Value of triangle:-");
	scanf("%d%d%d",&a,&b,&c);
	
	sum = a+b+c;
	
	sum==180?printf("\n Triangle is valid"):printf("\n trinagle is Not Valid");
	
	getch();
}
