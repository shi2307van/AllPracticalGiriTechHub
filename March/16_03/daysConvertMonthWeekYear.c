#include<stdio.h>
#include<conio.h>

void main(){
	int days,week,month,year;
	
	printf("\n Enter the days :- ");
	scanf("%d",&days);
	
	year = days/365;
	month = (days%365)/30;
	week = ((days%365)%30)/7;
	
	printf("\n Year Present in %d",year);
	printf("\n Month Present in %d",month);
	printf("\n Week Present in %d",week);

	getch();
}