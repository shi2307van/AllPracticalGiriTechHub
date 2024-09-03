#include<stdio.h>
#include<conio.h>

void main(){
	int year;
	
	printf("\n Enter the Year :- ");
	scanf("%d",&year);
	
	if(year%400==0){
		printf("\n %d year is leap year!!",year);
	}
	else if(year%100==0){
		printf("\n %d year is not leap year!!",year);
	}
	else if(year%4==0){
		printf("\n %d year is leap year!!",year);
	}
	else{
		printf("\n %d year is not leap year!!",year);
	}
	getch();
}
