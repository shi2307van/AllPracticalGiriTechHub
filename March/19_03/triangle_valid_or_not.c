#include<stdio.h>
#include<conio.h>

void main(){
	int a,b,c;
	
	printf("\n Enter the three side of triangle :- ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b+c==180)
	{
		printf("\n Triangle is Valid");
	}
	else
	{
		printf("\n Triangle is Invalid");
	}
	getch();
	
}
