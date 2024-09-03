#include<stdio.h>
#include<conio.h>

void main(){
	
	int year;
	
	printf("\n Enetr the Number :-");
	scanf("%d",&year);
	
	(year%400==0) ? printf("\n %d is the Leap Year",year):
		(year%100==0) ? printf("\n %d is the not leap year",year):
			(year%4==0) ? printf("\n %d is the leap year",year):
									printf("\n %d is the not leap year",year);
									
	getch();
	
}
