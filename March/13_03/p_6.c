#include<stdio.h>
#include<conio.h>

void main(){
	
	int feh,cel;
	
	printf("Enter the Temperature in fahrenheit :- ");
	scanf("%d",&feh);
	
	cel = (feh-32)*5/9;
	
	printf("\n Value Of Celsius :- %d",cel);
	
	getch();
	
	
}
