#include<stdio.h>
#include<conio.h>

void main()
{
	int bSal;
	
	printf("\n Enter the basic salary :-");
	scanf("%d",&bSal);
	
	(bSal<=10000) ? printf("\n Gross Salary :- %d",bSal+0.20+0.80):
		(bSal>=10000 && bSal<=20000) ? printf("\n Gross Salary :- %d",bSal+0.25+0.90):
			(bSal>20000)?printf("\n Gross Salary :- %d",bSal+0.35+0.95):
				printf("\n invalid Input!!");
				
	getch();
}
