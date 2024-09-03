#include<stdio.h>
#include<conio.h>

void main(){
	int year;
	
	printf("\n Enetr the Year :-");
	scanf("%d",&year);
	
	if((year%400==0) || (year%4==0)){
		printf("\n Leap Year");
	}
//	else if(year%100==0){
//		printf("\n Not leap year");
//	}
//	else if(year%4==0){
//		printf("\n Leap Year");
//	}
	else{
		printf("\n Not Leap Year");
	}
	getch();
}
