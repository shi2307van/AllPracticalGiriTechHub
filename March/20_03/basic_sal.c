#include<stdio.h>
#include<conio.h>

void main(){
	int bSalary,gSalary;
	
	printf("\n Enter the basic salary :-");
	scanf("%d",&bSalary);
	
	if(bSalary<=10000){
		gSalary = bSalary+0.20+0.80;
		printf("\n Gross Salary is the %d",gSalary);
	}
	else if(bSalary<=20000){
		gSalary = bSalary+0.25+0.90;
		printf("\n Gross Salary is the %d",gSalary);
	}
	else{
		gSalary = bSalary+0.30+0.95;
		printf("\n Gross Salary is the %d",gSalary);
	}
	
	getch();
}
